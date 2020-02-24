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
	int max = 0;
	int indexMax = 0;
	for(int i=0;i<st.length();i++)
		{
			if(hash.find(st[i])!=hash.end()){
				if(hash[st[i]] > max)
				{
					indexMax = i;
					max = hash[st[i]];
				}
			}
		}
		
	cout<<"index of maximum Occurance charactor "<<st[indexMax]<<" is: "<< indexMax;
return 0;
}        		
