#include<iostream>
#include<vector>
struct node
{
	int data;
	node* left;
	node* right;
};


class Tree
{
	node* root;
public:
	Tree();
	Tree(int);
	void add(node*,int);
	void addNode(int);
	bool traversal(node*,int,std::vector<node*>&);
	node *lca(int,int);
};
