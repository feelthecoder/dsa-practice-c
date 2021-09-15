#include<stdio.h>
#include<math.h>

/* Given an array implementation of binary tree.
    
    8
   / \
   9  23
   /\  /\
   0 1 4 91
   
Convert the above given binary tree into max Heap and extract maximum element.
  
    91
    /\
   9  23
   /\ /\
  0 1 4 8
  
  91 will be output.
  
  */
  
  int extractMax(int arr[],int n){
  	if(n<1)
  	  printf("Max Heap Underflow!");
  	
  	int max = arr[0];
  	arr[0]=arr[n-1];
  	maxHeapify(arr,n,0);
  	return max;
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
	
	printf("%d is the extracted maximum element. ",extractMax(arr,n));  

}
