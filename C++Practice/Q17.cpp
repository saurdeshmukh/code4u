#include<iostream>

using namespace std;

int findNthFibonacci(int n)
{
	if(n == 1){
		return 0;
	}
	if(n ==2){
		return 1;
	}
	int i =2;;
	int a = 0, b =1,c=0;
	while(i<n){
		c = a+ b;
		a = b;
		b = c;
		i++;
	}
	return c;
}

int main()
{
cout<<"Enter index of number you want from fibnocci's series:";
int num = 0;
cin>>num;
cout<<num<<" th number of fibnocci's series is:"<<findNthFibonacci(num)<<endl;

return 0;
} 
