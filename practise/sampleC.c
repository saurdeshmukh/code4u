#include<stdlib.h>                                                                                    
#include<stdio.h>
#include"sampleC.h"
extern int x;
int g()
{
	static int x = 1;
	return x++;
}
int f()
{
	static int x=2;
	return x++;
}                                                                                                                                                                                                                                                                                                                                                                              
int main()                                                                                                                                                                                                
{
	int i=0;	
	printf("X initial: %d",x);
	for(i=0;i<5;i++){
		printf("\nFirst Function:%d",g());
		printf("\nSecond Fucntion:%d",f());
	}
	return 0;                                                                                                                                                                                                        
}                                                                       
