#include<iostream>
using namespace std;



template<typename T,typename Q>
void printAll(T x,Q y)
{
	cout<<x<<endl;
	cout<<y<<endl;

}

int main()
{
	printAll(3,5);
	printAll(4.5,6);
	printAll(6,"Saurabh");
	printAll('c',123);


	return 0;
}
