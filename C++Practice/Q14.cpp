#include<iostream>
#include<cctype>

using namespace std;

int main()
{

cout<<"Enter Integer String:"<<endl;
string strInt = "";
cin>>strInt;

int output = 0;

for(int i=0;i<strInt.length();i++){
		//if(strInt[i]<48 or strInt[i]>58)//{
		if(isdigit(strInt[i])){
			
			output = 10* output + (strInt[i]-48);
		}
		else{
			cout<<"\nEntered String contains non-integer charactors";
			break;
		}
}

cout<<endl<<"Integer conversion of String "<<strInt<<" is :"<<output<<endl;

return 0;
}
