#include<stdio.h>

// Choice based implementation

int stack[10];
int top=-1;

void push(){
	int item;
	if(isFull()){
	}
	else{
	scanf("%d",&item);
	top++;
	stack[top]=item;
	}
}

void pop(){
	
	if(isEmpty()){
	}
	     
	else{
		top--;
	}
}

int isFull(){
	if(top==10)
	     return 1;
    else
         return 0;
}

int isEmpty(){
	if(top==-1)
	     return 1;
	else
	     return 0;
}

void main(){
	
	int n,i;
	D:
	printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
	scanf("%d",&n);
	
	switch(n){
		case 1:
			push();
			goto D;
			break;
		case 2:
			pop();
			goto D;
			break;
		case 3:
			for(i=0;i<=top;i++){
				printf("%d ",stack[i]);
			}
			goto D;
			break;
		case 4:
			exit(0);
			
			break;
		default:
			exit(0);
	}
	
}
