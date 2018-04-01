#include<stdio.h>
int main()
{
 int i;
  
 printf("enter the number:");
	fflush(stdin);
 scanf("%d",&i);
printf("\n%d",i);
 if(i%2==0)
 printf("the number is even %d",i);
else
printf("the number is odd %d",i);
return 0;
 }
   
 
