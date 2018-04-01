#include<iostream>

#include"TreeNode.h"
using namespace std;
class Tree
{
TreeNode *root;
void addNodeTree(int,TreeNode*);
void displayTree(TreeNode*);
int getHeight(TreeNode*);
void printLayerTree(TreeNode*,int);
void InOrder(TreeNode*);
void PreOrder(TreeNode*);
void PostOrder(TreeNode*);
void TopView(TreeNode*,int);
public:
Tree();
Tree(int);
~Tree();
void addNode(int);
void display();
int NodeCount(TreeNode *);
int getNodeCount();
int Height();
void printLayer(int);
void InOrder();
void PreOrder();
void PostOrder();
void TopView();
};
