#include<stdio.h>

/* Given an array implementation of binary tree.
    
    8
   / \
   9  23
   /\  /\
   0 1 4 91
   
Convert the above given binary tree into max Heap and insert 8th value which is item.
  
    91
    /\
   9  23      ------>> add item as 8th value
   /\ /\
  0 1 4 8
  
  
    91                                     
    /\
   9  23   
   /\  /\
  0 1  4 8
  /
  98
  
    98
    /\
   91  23   
   /\  /\
  9 1  4 8
  /
 0
  
  The above tree will be output and this will be heapified.
  
  */
 
 void insertElement(int arr[],int n,int item){
 	int i,temp;
 	arr[n]=item;
 	i=n;
 	while(i>=0 && arr[i/2]<arr[i]){
 		temp = arr[i/2];
 		arr[i/2]=arr[i];
 		arr[i]=temp;
 		i=i/2;
	 }
 }
  
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
  
  void main(){
  	int arr[]={8,9,23,0,1,4,91};
  	int n = sizeof(arr)/sizeof(arr[0]);
  	int j,i;
  	int temp;
  	i=n;
	buildMaxHeap(arr,n);
  
    insertElement(arr,i,98);

    for(j=0;j<=n;j++)
      printf("%d ",arr[j]); 

}
