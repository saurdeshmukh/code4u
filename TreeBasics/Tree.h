#include<iostream>
#include"TreeNode.h"
using namespace std;

class Tree
{
TreeNode *root;
int NodeCount=0;
void addNodeTree(int,TreeNode*);
void displayTree(TreeNode*);
int getHeight(TreeNode*);
void printLayerTree(TreeNode*,int);
public:
Tree();
Tree(int);
~Tree();
void addNode(int);
void display();
int getNodeCount();
int Height();
void printLayer(int);
};
