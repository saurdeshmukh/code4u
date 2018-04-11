// Server side C/C++ program to demonstrate Socket programming
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <pthread.h>
#define PORT 8080
#include <fcntl.h>
#include <unistd.h>
#include <signal.h>
#include<ctype.h>

int server_fd=0;


void terminationHandler(int dummy)
{
	if(server_fd!=0)
		close(server_fd);
	exit(1);	
}
void* handler(void *args)
{
	int valread=0;	
	char buffer[1024]={0};
	char * hello = "Hi there";
	char * help = "\n_________HELP________\n 1.Add Numb1 Number2  \n 2.Sub Numb1 Number2 \n 3.Mul Numb1 Number2 \n 4.Div Numb1 Number2 \n Enter following command to get result:";
	int socketID=*(int*)args;
	while((valread = read( socketID , buffer, 1024))>0)
	{
        	if(strcmp(buffer,"hello")==0)
		{
        		send(socketID, hello , strlen(hello) , 0 );
		}
		else if(strcmp(buffer,"help")==0)
		{
        		send(socketID, help , strlen(help) , 0 );
		}
		else
		{
			char *tempBuffer = strtok(buffer," ");
			int word=0;
			char command[20]={0};
			int arg1=0,arg2=0;
			while (tempBuffer != NULL)
    			{
				if(word==0)
					strcpy(command,tempBuffer);
				if(word==1)
					arg1=*tempBuffer-'0';
				if(word==2)
					arg2=*tempBuffer-'0';
				word++;
        			tempBuffer = strtok(NULL, " ");
    			}
			if(strcmp(command,"Add") && strcmp(command,"Sub") && strcmp(command,"Mul") && strcmp(command,"Div"))
			{
				char* notValid="Command not valid";
				send(socketID,notValid,strlen(notValid),0);
			}
			else
			{
				char outBuffer[1024]={0};
				if(!strcmp(command,"Add"))
				{
					sprintf(outBuffer,"Addition of %d and %d is %d",arg1,arg2,arg1+arg2);
					send(socketID, outBuffer , strlen(outBuffer) , 0 );
				}
				else if(!strcmp(command,"Sub"))
				{
					sprintf(outBuffer,"Subtraction of %d and %d is %d",arg1,arg2,arg1-arg2);
                                        send(socketID, outBuffer , strlen(outBuffer) , 0 );
				}
				else if(!strcmp(command,"Mul"))
                                {       
                                        sprintf(outBuffer,"Multiplication of %d and %d is %d",arg1,arg2,arg1*arg2);
                                        send(socketID, outBuffer , strlen(outBuffer) , 0 );
                                }
				else if(!strcmp(command,"Div"))
                                {       
                                        sprintf(outBuffer,"Division of %d and %d is %f",arg1,arg2,(float)arg1/arg2);
                                        send(socketID, outBuffer , strlen(outBuffer) , 0 );
                                }
				else
				{
					printf("\n Command not found");

				}
			}
		}

		memset(buffer,0,1024);
	}
	close(socketID);
	return NULL;
}

int main(int argc, char const *argv[])
{
    int new_socket, valread;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);
    pthread_t thread;   
 
    signal(SIGINT, terminationHandler);


    // Creating socket file descriptor
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
    {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }

    // Forcefully attaching socket to the port 8080
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR,&opt, sizeof(opt)))
    {
        perror("setsockopt");
        exit(EXIT_FAILURE);
    }



    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons( PORT );
      
    // Forcefully attaching socket to the port 8080
    if (bind(server_fd, (struct sockaddr *)&address, 
                                 sizeof(address))<0)
    {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }
    if (listen(server_fd, 3) < 0)
    {
        perror("listen");
        exit(EXIT_FAILURE);
    }

   while(1)
   {
       if ((new_socket = accept(server_fd, (struct sockaddr *)&address,(socklen_t*)&addrlen))<0)
       {
          perror("accept");
          exit(EXIT_FAILURE);
       }

	int *thread_arg=malloc(sizeof(int));
        *thread_arg=new_socket;
        int thread1=pthread_create(&thread,NULL,(void*)handler,(void*)thread_arg); //thread creation

    }
    return 0;
}

