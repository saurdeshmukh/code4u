#include<iostream>
#include<string>
using namespace std;

void reverseString(string & st)
{
	char ch;
	for(int i=0;i<st.length()/2;i++){
		ch=st[i];
		st[i]=st[st.length()-i-1];
		st[st.length()-i-1]=ch;
	}
		
}

int main()
{
	string st="BaNaNa";
	cout<<"Original String:"<<st<<endl;
	reverseString(st);
	cout<<"Reversed String:"<<st<<endl;
	return 0;
}

