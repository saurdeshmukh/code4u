#include<iostream>
using namespace std;
int getPower(int a,int b)
{
	if(b==1)
		return a;
	else{
		return a *  getPower(a,b-1);
	}
}

int main()
{

	int x=4;
	int y=5;
	int result= getPower(x,y);

	cout<<x<<" to the power of "<<y<<" is:"<<result<<endl;


}
