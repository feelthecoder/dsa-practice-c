#include<stdio.h>
#include<math.h>

/* Given an array implementation of binary tree.
    
    8
   / \
   9  23
   /\  /\
   0 1 4 91
   
Convert the above given binary tree into min Heap.
  
    0
    /\
   1  4
   /\ /\
  9 8 23 91
  
  The above tree will be output.
  
  */
  
  void minHeapify(int arr[],int n, int i){
  	int temp;
  	int smallest=i;
  	int left=2*i+1;
  	int right=2*i+2;
  	
  	if(left<n && arr[left]<arr[i])
  	     smallest=left;
  	
  	if(right<n && arr[right]<arr[smallest])
  	     smallest=right;
  	
  	if(smallest!=i){
  		temp = arr[i];
  		arr[i]=arr[smallest];
  		arr[smallest]=temp;
  		minHeapify(arr,n,smallest);
	  }
  }
  
  void buildMinHeap(int arr[],int n){
  	int i;
	for(i=n/2 -1;i>=0;i--)
	minHeapify(arr,n,i);
  }
  
  void main(){
  	int arr[]={8,9,23,0,1,4,91};
  	int n= sizeof(arr)/sizeof(arr[0]);
  	int i;
  	
	buildMinHeap(arr,n);
	
	
	for (i=0;i<n;i++)
	  printf("%d ",arr[i]);  

}
