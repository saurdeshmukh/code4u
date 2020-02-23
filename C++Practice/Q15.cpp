#include<iostream>

using namespace std;

int main()
{

	int num = 0;
	cout<<"Enter the number:";
	cin>>num;
	if(num != 0 and !(num &(num-1)))
		cout<<"Entered number "<<num <<" is power of 2."<<endl;
	else
		cout<<"Entered number "<<num <<" is not power of 2."<<endl;

return 0;
}
