#include<iostream>
#include"Tree.h"
using namespace std;


Tree::Tree()
{
	this->root=nullptr;
}
Tree::Tree(int d)
{
  this->root=new node();
  root->data=d;
  root->left=nullptr;
  root->right=nullptr;
}
void Tree::add(node* ptr,int d)
{
	if(d>ptr->data)
	{
		if(ptr->right==nullptr)
		{
			ptr->right=new node{};
			ptr=ptr->right;
			ptr->data=d;
			ptr->right=nullptr;
			ptr->left=nullptr;
			return;
		}
		else
		{
			ptr=ptr->right;
			add(ptr,d);
		}
	}
	else
	{
		if(ptr->left==nullptr)
		{
			ptr->left = new node{};
			ptr=ptr->left;
			ptr->data=d;
			ptr->right=nullptr;
			ptr->left=nullptr;
			return;
		}
		else
		{
			ptr=ptr->left;
			add(ptr,d);
		}
	}

}
void Tree::addNode(int d)
{
	if(root==nullptr)
	{
		root=new node{};
		root->data=d;
		root->left=nullptr;
		root->right=nullptr;
	}
	else
	{
	    add(root,d);
	}
}
bool Tree::traversal(node* ptr,int v,vector<node*>& temp)
{
	int l=0,r=0;
	if(ptr!=nullptr)
	{
		if(ptr->data != v)
		{
			if(traversal(ptr->left,v,temp))
			{
                           temp.push_back(ptr->left);
			    l=1;
			}
			else
				 l=0;

			if(traversal(ptr->right,v,temp))
			{
				temp.push_back(ptr->right);
				 r=1;
			}
			else
				 r=0;

			if((l+r)==1)
				return true;
			else
				return false;
		}
		else
		{
			return true;
		}

	}
	else
		return false;

}

node * Tree::lca(int v1,int v2)
{
   vector<node*> vect1;
   vector<node*> vect2;
   int flag=0;
   node * final=nullptr;
   if(traversal(this->root,v1,vect1) && traversal(this->root,v2,vect2))
   {
	   for(int i=0;i<vect1.size() && flag==0;i++)
	   {
		   cout<<endl<<vect1[i]->data<<"   :";
		   for(int j=0;j<vect2.size()&& flag==0;j++)
		   {
			   cout<<vect2[j]->data<<"  ";
			   if(vect1[i]==vect2[j])
			   { 
                              flag=1;
			      final=vect1[i];
			   }
		   }
	   }

	   if(flag==0)
               final=root;
   }
   std::cout<<endl<<final->data<<endl;
   return final;
}

/*Best code for Lowest common Ancestor
node* lca_(node* root, int a, int b)
{
    if (b < root->data) {
        return lca_(root->left, a, b);
    }
    else if (a > root->data) {
        return lca_(root->right, a, b);
    }
    return root;
}

node* lca(node* root, int a, int b)
{
    if (a < b) {
        return lca_(root, a, b);
    }
    return lca_(root, b, a);
}
*/
