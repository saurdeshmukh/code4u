#include"TreeNode.h"
TreeNode::TreeNode()
{
  this->lPtr=nullptr;
  this->rPtr=nullptr;
  this->data=0;
}
TreeNode::TreeNode(int d)
{
  this->lPtr=nullptr;
  this->rPtr=nullptr;
  this->data=d;
}
TreeNode::TreeNode(TreeNode* left,TreeNode *right,int d)
{

  this->lPtr=left;
  this->rPtr=right;
  this->data=d;
}
TreeNode::~TreeNode()
{
//Basic Destructor Implementation
}
void TreeNode::printChildNodes()
{
  if(this!=nullptr)
    std::cout<<endl<<this->data;
  else
    return;
  if(this->lPtr != nullptr)
    (this->lPtr)->printChildNodes();
  if(this->rPtr !=nullptr)
    (this->rPtr)->printChildNodes();
}
TreeNode* TreeNode::getLeftPtr()
{
return this->lPtr;
}
TreeNode* TreeNode::getRightPtr()
{
return this->rPtr;
}
int TreeNode::getNodeData()
{
return this->data;
}
void TreeNode::addLeftNode(TreeNode *ptr)
{
this->lPtr=ptr;
}
void TreeNode::addRightNode(TreeNode *ptr)
{
this->rPtr=ptr;
}
