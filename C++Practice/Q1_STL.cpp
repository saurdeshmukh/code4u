#include<iostream>
#include<iterator>
#include<list>
using namespace std;





void showList(list<int> tList)
{
	list<int> :: iterator it;
	for(it=tList.begin();it!=tList.end();++it)
		cout<<*it<<endl;

}
int main()
{
list <int> myList;
for(int i=0;i<10;i++)
	myList.push_back(i);

showList(myList);
myList.reverse();
cout<<"Reversed Linked List:"<<endl;
showList(myList);

return 0;
}	
