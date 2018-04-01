#include<iostream>
#include"Tree.h"
using namespace std;
int main()
{
Tree *bTree=new Tree(5);
bTree->addNode(6);
bTree->addNode(3);
bTree->addNode(2);
bTree->display();
bTree->addNode(1);
bTree->addNode(4);
bTree->addNode(15);
bTree->addNode(7);
bTree->addNode(9);
bTree->addNode(8);
bTree->addNode(11);
bTree->addNode(13);
bTree->addNode(10);
bTree->addNode(12);
bTree->addNode(14);
int h=bTree->Height();
cout<<endl<<"Height:"<<h<<endl;
for(int i=1;i<=h;i++)
{
  bTree->printLayer(i);
  cout<<endl;
}
cout<<"\nInorder:";
bTree->InOrder();
cout<<"\nPreOrder:";
bTree->PreOrder();
cout<<"\nPostOrder()";
bTree->PostOrder();
cout<<"\n TopView:";
bTree->TopView();

cout<<"\nNumnber of Nodes:"<<bTree->getNodeCount()<<endl;

return 0;
}
