//Find the time intersection between two lists
//each list should be in ascending order and there will not any overlapping between time in each list

#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
	map<int,int>List1;
	map<int,int>List2;                                                                             
        List1.insert(pair<int,int>(1,4));                                                             
        List1.insert(pair<int,int>(5,7));                                                             
        List1.insert(pair<int,int>(9,12));                                                             
        List1.insert(pair<int,int>(13,16));                                                    
        List2.insert(pair<int,int>(2,6));                                                                                                                                                                 
        List2.insert(pair<int,int>(10,11));                                                                                                                                                                 
        List2.insert(pair<int,int>(12,13));                                                                                                                                                                 
	map<int,int>ranges;
	map<int,int>::iterator itr1,itr2;
	itr1=List1.begin();
	itr2=List2.begin();
	while(itr1 != List1.end() && itr2 != List2.end())
	{
		if(itr1->first < itr2->first && itr1->second < itr2->first)
                	itr1++;
                else if(itr1->first > itr2->first && itr1->first > itr2->second)
                        itr2++;
		else if(itr1->first < itr2->first)
		{
			if(itr1->second > itr2->second)
			{
				ranges.insert(pair<int,int>(itr2->first,itr2->second));
				itr2++;
			}
			else
			{
				//to avoid duplication of start and end ranges
				if(itr2->first !=itr1->second)
					ranges.insert(pair<int,int>(itr2->first,itr1->second));
					itr1++;
			}
		}
		else
		{		
			if(itr1->first!=itr2->second)
			{                                                                 
                       		if(itr1->second > itr2->second)                                               
                        	{                                                                             
                               		ranges.insert(pair<int,int>(itr1->first,itr2->second));                                                                                             
                                	itr2++;                                                               
                        	}                                                                             
                        	else
                        	{       
                                	ranges.insert(pair<int,int>(itr1->first,itr1->second));                              
                                	itr1++;
				}                                                                                                                              
                        }
			else
				itr2++;
		}
	}
	for(itr1=ranges.begin();itr1!=ranges.end();++itr1)
		cout<<"["<<itr1->first<<","<<itr1->second<<"]"<<endl;
return 0;
}

