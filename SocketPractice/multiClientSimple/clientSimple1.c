// Client side C/C++ program to demonstrate Socket programming
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#define PORT 8080
  
int main(int argc, char const *argv[])
{
    struct sockaddr_in address;
    int sock = 0, valread;
    struct sockaddr_in serv_addr;
    char *hello = "hello";
    char *help = "help";
    char *command="Sub 5 4";
    char buffer[1024] = {0};
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        printf("\n Socket creation error \n");
        return -1;
    }
  
    memset(&serv_addr, '0', sizeof(serv_addr));
  
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);
      
    // Convert IPv4 and IPv6 addresses from text to binary form
    if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)<=0) 
    {
        printf("\nInvalid address/ Address not supported \n");
        return -1;
    }
  
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
    {
        printf("\nConnection Failed \n");
        return -1;
    }
    send(sock , hello , strlen(hello) , 0 );
    //printf("Hello message sent\n");

    valread = read( sock , buffer, 1024);
    printf("%s\n",buffer );
    send(sock , help , strlen(help) , 0 );
    //printf("Hello message sent\n");
    char buffer2[1024]={0};
    valread = read( sock , buffer2, 1024);
    printf("%s\n",buffer2 );
    send(sock , command , strlen(command) , 0 );
    //printf("Hello message sent\n");
    char buffer3[1024]={0};
    valread = read( sock , buffer3, 1024);
    printf("%s\n",buffer3 );


    return 0;
}

