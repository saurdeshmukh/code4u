#include<stdio.h>

typedef struct 
{
	unsigned Gender:1;
	unsigned Married:1;
	unsigned Adult:1;
}bitNew;

int main()
{
	bitNew n1;
     //	n1.Gender=1;
	printf("\n%d %d %d",n1.Gender,n1.Married,n1.Adult);
	n1.Married=1;
	n1.Adult=1;
	printf("\n%d %d %d",n1.Gender,n1.Married,n1.Adult);
	return 0;
}	
