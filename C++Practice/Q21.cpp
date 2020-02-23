#include<iostream>

using namespace std;

string convertToBinary(int num){
	string binStr = "";
	while(num){
		if(num%2)
			binStr = binStr + "1";
		else
			binStr = binStr + "0";
		num = num / 2;
	}
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
