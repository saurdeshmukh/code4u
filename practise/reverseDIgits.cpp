#include<iostream>
using namespace std;

int main()
{
	int i,temp,output=0;

	cout<<endl<<"ENter the number:"<<endl;
	cin>>i;
	while(i>0)
	{
		
		output=(output*10)+i%10;
		i=i/10;
	}
	cout<<output;
}
