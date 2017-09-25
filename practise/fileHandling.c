#include<dirent.h>
#include<stdio.h>
int main()
{
	DIR *d;
	struct dirent *dir;
	d=opendir("..\\TreeBasics");
	if(d)
	{
		while((dir=readdir(d))!=NULL)
		{
			printf("\n%s",dir->d_name);
		
		}
		closedir(d);
	}

	return 0;
}
