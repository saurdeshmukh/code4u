#include"Tree.h"

Tree::Tree()
{
 this->root=new TreeNode();
 this->NodeCount++;
}
Tree::Tree(int d)
{
this->root=new TreeNode(d);
this->NodeCount++;
}
Tree::~Tree()
{
 //write destructor to delete all child nodes and then root node
}
void Tree::addNode(int d)
{
 //trial using this to call recursive function addNodeTree()
 this->addNodeTree(d,this->root);
}
int Tree::getNodeCount()
{
return this->NodeCount;
}

void Tree::addNodeTree(int d,TreeNode* ptr)
{
  if(d< ptr->getNodeData())
   {
     if(ptr->getLeftPtr())
         addNodeTree(d,ptr->getLeftPtr());
     else
         ptr->addLeftNode(new TreeNode(d));
   }
  else
   {
     if(ptr->getRightPtr())
        addNodeTree(d,ptr->getRightPtr());
     else
        ptr->addRightNode(new TreeNode(d));
   }    
}
void Tree::display()
{
//calling recursive function
displayTree(this->root);
}
void Tree::displayTree(TreeNode *ptr)
{
  static int step=0;
  std::cout<<endl<<ptr->getNodeData()<<"  "<<step;
  step++;
  if(ptr->getLeftPtr())
    displayTree(ptr->getLeftPtr());
  if(ptr->getRightPtr())
    displayTree(ptr->getRightPtr());
}
int Tree::Height()
{
 return getHeight(this->root);
}
int Tree::getHeight(TreeNode* ptr)
{
  int l=0,r=0;
  if(ptr->getLeftPtr())
   l= getHeight(ptr->getLeftPtr());
  else
   l=0;
  if(ptr->getRightPtr())
   r=getHeight(ptr->getRightPtr());
  else
   r=0;
  if(l>r)
   return 1+l;
  else
   return 1+r;
}
void Tree::printLayer(int h)
{
  this->printLayerTree(this->root,h);
}

void Tree::printLayerTree(TreeNode *ptr,int h)
{

       if(ptr==nullptr)
          return;
      if(h==1)
        std::cout<<ptr->getNodeData()<<" ";
      else
        {
          printLayerTree(ptr->getLeftPtr(),h-1);
          printLayerTree(ptr->getRightPtr(),h-1);
        }
}
