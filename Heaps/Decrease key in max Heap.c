#include<stdio.h>
#include<math.h>

/* Given an array implementation of binary tree.
    
    8
   / \
   9  23
   /\  /\
   0 1 4 91
   
Convert the above given binary tree into max Heap and increase 2nd value to 0.
  
    91
    /\
   9  23      ------>> change 9 to 0 then heapify
   /\ /\
  0 1 4 8
  
  
    91
    /\
   1  23   
   /\  /\
  0  0 4 8
  
  The above tree will be output.
  
  */

void maxHeapify(int[],int,int);
void decreaseKey(int[],int,int);
void buildMaxHeap(int[],int);
  

  
  void maxHeapify(int arr[],int n, int i){
  	int temp;
  	int largest=i;
  	int left=2*i+1;
  	int right=2*i+2;
  	
  	if(left<n && arr[left]>arr[i])
  	     largest=left;
  	
  	if(right<n && arr[right]>arr[largest])
  	     largest=right;
  	
  	if(largest!=i){
  		temp = arr[i];
  		arr[i]=arr[largest];
  		arr[largest]=temp;
  		maxHeapify(arr,n,largest);
	  }
  }
  
  void buildMaxHeap(int arr[],int n){
  	int i;
	for(i=n/2 -1;i>=0;i--)
	maxHeapify(arr,n,i);
  }
  
  void decreaseKey(int arr[],int i, int key){
  	int n;
  	if(key>arr[i])
  	printf("Given value is greater than node value..");
  	n = sizeof(arr)/sizeof(arr[0]);
  	arr[i]=key;
  }
  
  void main(){
  	int arr[]={8,9,23,0,1,4,91};
  	int n= sizeof(arr)/sizeof(arr[0]);
  	int i;
  	
	buildMaxHeap(arr,n);
	
	decreaseKey(arr,1,0);
	maxHeapify(arr,n,1);
	for (i=0;i<n;i++)
	  printf("%d ",arr[i]);  

}
