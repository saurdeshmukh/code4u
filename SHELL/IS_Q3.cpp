#include<iostream>
using namespace std;



//void swap(int * array,int n) function call can be pass as this
void swap(int array[],int n)
{
	if(array == nullptr || n==0)
		return;
	int start=0;
	int end=n-1;
	int temp;
	while(start < end)
	{
		temp=array[start];
		array[start]=array[end];
		array[end]=temp;
		start++;
		end--;
	}
}

void printMatrix(int * array,int n)
{
	if(array == nullptr || n==0)
		return;
	
	for(int i=0;i<n;i++)
		cout<<array[i]<<" ";
} 

int main()
{
	
	int Array1[6]={1,2,3,4,5,6};
	int n=6;
	//Test 1:
	swap(Array1,n);
	printMatrix(Array1,n);
	//Test 2	
	int *Array2=nullptr;
	printMatrix(Array2,n);
	//Test 3
	n=0;
	printMatrix(Array1,n);		




return 0;
}
