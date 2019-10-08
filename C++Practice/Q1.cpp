#include<iostream>
using namespace std;
class Node
{
	int value;
	Node* next;

public:
	Node(){
		value=0;
		this->next=nullptr;
	}
	Node(int k){
		value=k;
		this->next=nullptr;
	}
	Node* getNext()
	{
		return this->next;
	}
	int getValue(){
		return this->value;
	}
	void setValue(int k){
		this->value=k;
	}
	void setNext(Node *n){
		this->next=n;
	}

};

class LinkedList
{
	Node * head;

public:
	LinkedList(){
		this->head=nullptr;
	}
	LinkedList(int k){	
		this->head=new Node(k);
	}
	void showList(){
		Node * temp=this->head;
		cout<<"Linked List:\n";
		while(temp){
			cout<<temp->getValue()<<endl;
			temp=temp->getNext();
		}
	}
	void insert(int k){
		Node * temp=this->head;
		if(temp){
			while(temp->getNext()){
				temp=temp->getNext();
			}
			Node * temp1=new Node(k);
			temp->setNext(temp1);
		}
		else{
			this->head=new Node(k);
		
		}
	}
	void reverse()
	{
		Node* prev=nullptr;
		Node* next;
		Node* current;
		current = this-> head;
		while(current)
		{
			next = current->getNext();
			current->setNext(prev);
			prev = current;
			current = next;
		}
		this->head = prev;
	}
};

int main()
{

	LinkedList mylist;
	mylist.insert(5);
	mylist.insert(8);
	mylist.insert(9);
	mylist.insert(2);
	mylist.insert(4);
	mylist.showList();
	mylist.reverse();
	mylist.showList();
}	
		
