#include<iostream>
#include<cctype>

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

cout<<"Enter Integer:"<<endl;
int IntVal = 0;
cin>>IntVal;

string output = "";
bool flag = false;
	if(IntVal <0){
		flag = true;
		IntVal = IntVal*(-1);
	}
	while(IntVal)
	{
		int num = IntVal %10;
		output = output + (char)(48+num);
		IntVal = IntVal /10;
	}
	
	if(flag)
		output = output + '-';	
reverseString(output);

cout<<endl<<"String conversion of Integer is :"<<output<<endl;

return 0;
}
