#include<iostream>
#include"Tree.h"
using namespace std;
int main()
{
	Tree t(8);
	t.addNode(4);
	t.addNode(9);
	t.addNode(1);
	t.addNode(2);
	t.addNode(3);
	t.addNode(6);
	t.addNode(5);
       node* out = t.lca(1,2);	
         cout<<"output:"<<out;       

	return 0;
}
