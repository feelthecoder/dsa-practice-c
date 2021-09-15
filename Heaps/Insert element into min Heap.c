#include<stdio.h>

/* Given an array implementation of binary tree.
    
    8
   / \
   9  23
   /\  /\
   0 1 4 91
   
Convert the above given binary tree into min Heap and insert 8th value which is item.
  
    0
    /\
   1   4      ------>> add item as 8th value
  /\   /\
 9  8 23 91
  
  
    0                                     
    /\
   1   4   
   /\   /\
  9  8 23 91
  /
  -2
  
    -2
    /\
   0  4   
  /\  / \
 1  8 23 91
 /
9
  
  The above tree will be output and this will be heapified.
  
  */
 
 void insertElement(int arr[],int n,int item){
 	int i,temp;
 	arr[n]=item;
 	i=n;
 	while(i>=0 && arr[i/2]>arr[i]){
 		temp = arr[i/2];
 		arr[i/2]=arr[i];
 		arr[i]=temp;
 		i=i/2;
	 }
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
  	int n = sizeof(arr)/sizeof(arr[0]);
  	int j,i;
  	int temp;
  	i=n;
	buildMinHeap(arr,n);
  
    insertElement(arr,i,-2);

    for(j=0;j<=n;j++)
      printf("%d ",arr[j]); 

}
