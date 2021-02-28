#include<stdio.h>
#include<stdlib.h>
struct  node
{
	int data;
	struct node* link;
}*top;
typedef struct node NODE;
NODE *create(NODE *tmp)
{
    NODE *top; 
    if (tmp==NULL){
		tmp=(NODE *)malloc(sizeof(NODE));
		tmp->link=NULL;
	return tmp;
	}
	top=(NODE *)malloc(sizeof(NODE));
	top->link=tmp;
	return top;
}
NODE *push(NODE *tmp,int data)
{
	tmp=create(tmp);
	tmp->data=data;
	return tmp;
}
void peek(NODE *tmp)
{
	NODE *temp;
	temp=tmp;
	if(temp==NULL)
	printf("Stack Underflow !!!  Aborting !!\n");
	else
	{
	printf("Data Stored in stack ===>>>>\n\n");
	while(temp!=NULL)
	{
		printf("%d  ",temp->data);
		temp=temp->link;
	}
}
}
NODE *pop(NODE *temp)
{
	if(temp==NULL)
	printf("\nStack Underflow !! No elemets present!!");
	else
	temp=temp->link;
	printf("\nElement Deleted  !!\n");
	printf("\nNew Stack :  ");
	peek(temp);	
	return temp;
}
void main()
{
       	 int data,ch,del_key;
    top=NULL;
	do
	{
	printf("\nWelcome to Stack Operation !!!!!");
	printf("\n\n1.PUSH\n\n2.PEEK\n\n3.POP\n\n4.EXIT");
	printf("\n\nEnter your choice ?\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:	
	    printf("\n\nEnter the data you want to store ?");
	    scanf("%d",&data);
	    top=push(top,data);
	    printf("Data Added Successfully !!");
	    break;
	case 2: 
	    peek(top);
	    break;
	case 3:
		top=pop(top);
		break;
	case 4:
		exit(0);
		break;
	default: 
	    printf("INVALID CHOICE!!!");
	}
}while(1);
}
