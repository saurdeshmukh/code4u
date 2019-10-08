#include<stdio.h>



int main()
{
	int num = 1;
	char *ch = (char*)&num;
		
	if(*ch)
		printf("Little Indian");
	else
		printf("Big Indian");

return 0;
}
