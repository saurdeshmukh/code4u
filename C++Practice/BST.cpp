#include<iostream>
using namespace std;
class Node
{
	int value;
	Node* rptr;
	Node* lptr;
public:
	Node(){
	value = 0;
	rptr = lptr = nullptr;
	}
	Node(int v){
	value = v;
	rptr = lptr= nullptr;
	}
	void insert(int value)
	{
		if(value > this->value)
			if(this->rptr == nullptr)
				this->rptr = new Node(value);
			else
				this->rptr->insert(value);
		else
			if(this->lptr == nullptr)
				this->lptr = new Node(value);
			else
				this->lptr->insert(value);
	}
	void Inorder()
	{
		if(this->lptr)
			this->lptr->Inorder();
		cout<<this->value<<endl;
		if(this->rptr)
			this->rptr->Inorder();
	}
		
};
int main()
{

	Node * head = new Node(5);
	head->insert(6);
	head->insert(7);	
	head->insert(4);	
	head->insert(9);	
	head->insert(8);

	head->Inorder();
}
	
