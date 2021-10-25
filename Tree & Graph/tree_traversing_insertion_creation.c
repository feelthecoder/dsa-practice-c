#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* llink;
	struct node* rlink;
}*tmp=NULL;

typedef struct node NODE;

NODE *create();

void preorder(NODE *);
void inorder(NODE *);
void postorder(NODE *);
void insert(NODE *);

int main()
{
int n,i,ch;
do{
	printf("\n\n1.Create\n\n2.Insert\n\n3.Preorder\n\n4.postorder\n\n5.Inorder\n\n6.Exit\n\n");
	printf("\n\nEnter your choice? :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			tmp=create();
			break;
		case 2:
		     insert(tmp);
			 break;	
		case 3: 
		     printf("\n\nDisplay tree in preorder traversal :");
		     preorder(tmp);
		     break;
		case 4:
			 printf("\n\nDisplay tree in postorder traversal :");
			 postorder(tmp);
			 break;
		case 5:
			 printf("\n\nDisplay tree in Inorder traversal :");
			 inorder(tmp);
			 break;
		case 6:
			 exit(0);
			 break;
		default :
			printf("\n\nInavalid choice!!!");
	}
	}while(n!=5);
	return 0;	
}
void insert(NODE *root)
{
	NODE *newnode;
	if(root==NULL)
	{
		newnode=create();
		root=newnode;
	}
	else
	{
		newnode=create();
		while(1)
		{
			if(newnode->data<root->data)
			{
				if(root->llink==NULL)
				{
					root->llink=newnode;
					break;
				}
				root=root->llink;
			}
			if(newnode->data>root->data)
			{
				if(root->rlink==NULL)
				{
					root->rlink=newnode;
					break;
				}
				root=root->rlink;
			}
		}
	}
}

NODE *create()
{
	NODE *newnode;
	int n;
	newnode=(NODE *)malloc(sizeof(NODE));
	printf("\n\nEnter the data:");
	scanf("%d",&n);
	newnode->data=n;
	newnode->rlink=NULL;
	newnode->rlink=NULL;
	return newnode;
}

void postorder(NODE *tmp)
{
	if(tmp!=NULL)
	{
		postorder(tmp->llink);
		postorder(tmp->rlink);
		printf("%d",tmp->data);
}
}
void inorder(NODE *tmp)
{
	if(tmp!=NULL)
	{
		inorder(tmp->llink);
		printf("%d",tmp->data);
		inorder(tmp->rlink);
	}
}
 
 void preorder(NODE *tmp)
 {
 	if(tmp!=NULL)
 	{
 		printf("%d",tmp->data);
 		preorder(tmp->llink);
 		preorder(tmp->rlink);
	 }
 }
