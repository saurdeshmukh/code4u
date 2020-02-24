#include<iostream>

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

string convertToBinary(int num){
	string binStr = "";
	while(num){
		if(num%2)
			binStr = binStr + "1";
		else
			binStr = binStr + "0";
		num = num / 2;
	}
	reverseString(binStr);
	return binStr;
}

int main()
{

cout<<"Enter Number:";
int num;
cin>>num;
cout<<"String binary value of entered number "<<num<<" is :"<<convertToBinary(num);

return 0;
} 
