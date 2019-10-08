#include<iostream>
using namespace std;

int main()
{
	string myString;
	cout<<"Enter The parenthesis String:";
	cin>>myString;
	int i=0,count = 0;
	for(i=0;i<myString.length();i++)
	{
		if(count>=0)
		{
			if(myString[i]=='(')
				count +=1;
			else if(myString[i]==')')
				count -=1;
			else
				return -1;
		}
		else
			break;
	}

	if(count == 0)
		cout<<"\nEntered String is perfect parenthesis\n";
	else
		cout<<"\n Not Good\n"; 
}
