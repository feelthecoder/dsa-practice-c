#include<stdio.h>
#include<math.h>

/* Given an array implementation of binary tree.
    
    8
   / \
   9  23
   /\  /\
   0 1 4 91
   
Convert the above given binary tree into max Heap and increase 4th value to 34.
  
    91
    /\
   9  23      ------>> change 0 to 34 then heapify
   /\ /\
  0 1 4 8
  
  
    91
    /\
   34  23   
   /\  /\
  9 1  4 8
  
  The above tree will be output.
  
  */
  
  void increaseKey(int arr[],int i, int key){
  	int temp;
  	if(key<arr[i])
  	printf("Given value is less than node value..");
  	
  	arr[i]=key;
  	while(i>1 && arr[i/2]<arr[i])
  	{
  		temp=arr[i/2];
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
  	int n= sizeof(arr)/sizeof(arr[0]);
  	int i;
  	
	buildMaxHeap(arr,n);
	
	increaseKey(arr,3,34);
	
	for (i=0;i<n;i++)
	  printf("%d ",arr[i]);  

}
