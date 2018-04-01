#include<stdio.h>

int main()
{
unsigned int i=1;
char *c=(char*)&i;
if(*c)
	printf("\nLittle Endian");
else
	printf("\nBig Endian");
return 0;
}
