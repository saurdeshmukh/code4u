#include<stdio.h>
#include<string.h>

void reverseString(char * ch,int len)
{
	char * init=ch;
	char* end=ch+len-1;
	char temp;
	while(end>init)
	{
		temp=*init;
		*init = *end;
		*end = temp;
		init ++;
		end--;
	}
}


int main(){
	char myString[100]="BANANA";
	printf("\nGiven String:%s\n",myString);
	reverseString(myString,strlen(myString));
	printf("\nReverse String:%s\n",myString);
	return 0;
}
