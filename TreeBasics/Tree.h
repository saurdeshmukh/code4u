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

void InOrder(TreeNode*);

void PreOrder(TreeNode*);

void PostOrder(TreeNode*);

public:
Tree();

Tree(int);

~Tree();

void addNode(int);

void display();

int getNodeCount();

int Height();

void printLayer(int);

void InOrder();

void PreOrder();

void PostOrder();

};
