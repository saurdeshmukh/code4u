#include<stdio.h>

int main(){

int num,rem=0,tempNum=0;
printf("\nEnter The Number:");
scanf("%d",&num);
if(num<0)
{
	printf("\nGiven number is not Palindrome\n");
	return -1;
}
rem=num;

while(rem)
{
	tempNum=10*tempNum+(rem%10);
	rem=rem/10;
}

if(tempNum==num)
	printf("\nGiven Number %d is Palindrome number.\n",num);
else
	printf("\nGiven Number %d is not a Palindrome number.\n",num);
}
