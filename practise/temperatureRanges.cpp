//Find the rnage of time where temperature is above 50 

#include<iostream>
#include<map>
#include<iterator>
#define tTemp 50
using namespace std;



int main()
{
	map<int,int>Temp;
	Temp.insert(pair<int,int>(1,46));
	Temp.insert(pair<int,int>(2,52));
	Temp.insert(pair<int,int>(3,54));
	Temp.insert(pair<int,int>(4,52));
	Temp.insert(pair<int,int>(5,34));
	Temp.insert(pair<int,int>(6,52));
	Temp.insert(pair<int,int>(7,45));
	Temp.insert(pair<int,int>(8,53));
	Temp.insert(pair<int,int>(9,56));
	Temp.insert(pair<int,int>(10,51));

	map<int,int>ranges;

	map <int, int> :: iterator itr;

	int start=0;
	int last=0;
	for(itr=Temp.begin();itr!=Temp.end();++itr)
	{
		if(itr->second > tTemp)
		{
			if(start == 0)
				{
					start=itr->first;
				}
			else
				last=itr->first;
		}
		else
		{
			if(last !=0 || start !=0)
			{
				if(last==0)
					ranges.insert(pair<int,int>(start,start));
				else
					ranges.insert(pair<int,int>(start,last));
			}
			start=0;
			last=0;
		}
	}
	//last element when list ends
	if(last !=0 || start !=0)
        {
             if(last==0)
             	ranges.insert(pair<int,int>(start,start));
             else
                ranges.insert(pair<int,int>(start,last));
        }
	//printing all elements in ranges map 
	
	for(itr=ranges.begin();itr!=ranges.end();++itr)
		cout<<"["<<itr->first<<","<<itr->second<<"]"<<endl;
	
return 0;

}
