#include<iostream>
using namespace std;
class TreeNode
{
TreeNode *lPtr;
TreeNode *rPtr;
int data;
public:
TreeNode();
TreeNode(int);
TreeNode(TreeNode *,TreeNode*,int);
~TreeNode();
void printChildNodes();
TreeNode* getRightPtr();
TreeNode* getLeftPtr();
void addLeftNode(TreeNode*);
void addRightNode(TreeNode*);
int getNodeData();
};
