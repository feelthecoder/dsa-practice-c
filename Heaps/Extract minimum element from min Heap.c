#include<stdio.h>
#include<math.h>

/* Given an array implementation of binary tree.
    
    8
   / \
   9  23
   /\  /\
   0 1 4 91
   
Convert the above given binary tree into min Heap and extract minimum element.
  
    0
    /\
   1  4
   /\ /\
  9 8 23 91
  
  0 will be ouput.
  
  */
  
  int extractMin(int arr[],int n){
  	if(n<1)
  	  printf("Min Heap Underflow!");
  	
  	int min = arr[0];
  	arr[0]=arr[n-1];
  	minHeapify(arr,n,0);
  	return min;
  }
  
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
	
	printf("%d is the extracted minimum element. ",extractMin(arr,n));  

}
