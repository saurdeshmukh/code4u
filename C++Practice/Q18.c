#include<stdio.h>
#include<string.h>
int main(){

char myString[100];
printf("\nEnter String:");
scanf("%s",myString);

char *init=myString;
char *end = myString + strlen(myString)-1;

while(end>init)
{
	if(*end!=*init)
	{
		printf("\nGiven String %s is not a Palindrome string.\n",myString);
		return -1;
	}
	end --;
	init ++;
}
	printf("\nGiven String %s is a Palindrome string.\n",myString);
}
