#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{

 	string st;                                                                                    
        cout<<"Enter String:";                                                                        
        cin>>st;

	unordered_map<char,int> hash;
	for(int i=0;i<st.length();i++)
	{
		if(hash.find(st[i])!=hash.end())
			hash[st[i]] = hash[st[i]] + 1;
		else
			hash[st[i]] = 1;
	}
	for(int i=int('a');i<(int('a')+26);i++)
		{
			if(hash.find(char(i))!=hash.end())
				cout<<char(i)<<hash[char(i)];
		}
	
return 0;
}        		
