#include <stdio.h>
#include<stdlib.h> 

  
 
struct Node 
{ 
    int data; 
    struct Node* link; 
}; 
  
struct Queue 
{ 
    struct Node *front, *rear; 
}; 
  

void enQueue(struct Queue *q, int value) 
{ 
    struct Node *temp =malloc(sizeof(struct Node));
    temp->data = value; 
    if (q->front == NULL) 
        q->front = temp; 
    else
        q->rear->link = temp; 
  
    q->rear = temp; 
    q->rear->link = q->front; 
} 
  

int deQueue(struct Queue *q) 
{ 
    if (q->front == NULL) 
    { 
        printf ("Queue is empty"); 
        return INT_MIN; 
    } 
  
    
    int value; 
    if (q->front == q->rear) 
    { 
        value = q->front->data; 
        free(q->front); 
        q->front = NULL; 
        q->rear = NULL; 
    } 
    else   
    { 
        struct Node *temp = q->front; 
        value = temp->data; 
        q->front = q->front->link; 
        q->rear->link= q->front; 
        free(temp); 
    } 
  
    return value ; 
} 
  

void displayQueue(struct Queue *q) 
{ 
    struct Node *temp = q->front; 
    printf("\nElements in Circular Queue are: "); 
    while (temp->link != q->front) 
    { 
        printf("%d ", temp->data); 
        temp = temp->link; 
    } 
    printf("%d", temp->data); 
} 
  

int main() 
{ 
     
    struct Queue *q =malloc(sizeof(struct Queue)); 
    q->front = q->rear = NULL; 
  
    
    enQueue(q, 14); 
    enQueue(q, 22); 
    enQueue(q, 6); 
  
       displayQueue(q); 
  
    printf("\nDeleted value = %d", deQueue(q)); 
    printf("\nDeleted value = %d", deQueue(q)); 
  
     
    displayQueue(q); 
  
    enQueue(q, 9); 
    enQueue(q, 20); 
    displayQueue(q); 
  
    return 0; 
} 
