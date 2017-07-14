#include<iostream>
#include"Tree.h"
using namespace std;
int main()
{
Tree *bTree=new Tree(5);
bTree->addNode(4);
bTree->addNode(7);
bTree->addNode(10);
bTree->display();
bTree->addNode(6);
bTree->addNode(16);
bTree->addNode(1);
bTree->addNode(3);
int h=bTree->Height();
cout<<endl<<"Height:"<<h<<endl;
for(int i=1;i<=h;i++)
{
  bTree->printLayer(i);
  cout<<endl;
}
return 0;
}
