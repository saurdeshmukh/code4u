#include<iostream>
#include<vector>
using namespace std;

int main()
{
	string st;
	cout<<"Enter String:";
	cin>>st;
	int hash[26];
	for(int i=0;i<26;i++)
		hash[i]=0;
	for(int i=0;i<st.length();i++)
		{
			int ind = st[i] - 'a';
			hash[ind] = hash[ind] + 1;
		}
	string out="";
	for(int i=0;i<26;i++)
	{
		if(hash[i]>0)
		{
			out = out + char(i+int('a'));
			out = out+char(hash[i]+48);
			hash[i]=0;
		}
	
	};
	cout<<out<<endl;

return 0;
}
