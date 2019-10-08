#include<stdio.h>
#include<stdlib.h>
struct Node{
int value;
struct Node* next;
};

void insert(struct Node* root,int value)
{

	if(root==NULL)
	{
		root = (struct Node*)malloc(sizeof(struct Node));
		root->value = value;
		root->next = NULL;
		printf("\nInside Root:%d",root);
		return *root;
	}
	else
	{
		struct Node* temp = root;
		while(temp)
		{
			if(temp->next == NULL)
			{
				temp->next = (struct Node*)malloc(sizeof(struct Node));
				temp->next->value = value;
				temp->next->next = NULL;
			}
			
			printf("\nInside Nodes:%d",temp);
			temp = temp->next;
		}
		return *temp;
	}
}

void printList(struct Node* root)
{
	struct Node* temp = root;
	while(temp!=NULL)
                {
			       
			printf("\nInside Root:%d",root);
            		printf("\n%d",temp->value);
			temp = temp->next; 
                }
}

int main()
{

struct Node root=NULL;
root = insert(&root,3);
root = insert(&root,5);
printList(&root);
return 0;
}
