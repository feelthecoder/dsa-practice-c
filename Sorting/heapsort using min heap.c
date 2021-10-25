#include<stdio.h>  
int temp;  
  
void minHeapify(int arr[], int size, int i)  
{  
int smallest = i;    
int left = 2*i + 1;    
int right = 2*i + 2;    
  
if (left < size && arr[left] < arr[smallest])  
smallest = left;  
  
if (right < size && arr[right] < arr[smallest])  
smallest = right;  
  
if (smallest != i)  
{  
    temp = arr[i];  
    arr[i]= arr[smallest];   
    arr[smallest] = temp;  
    minHeapify(arr, size, smallest);  
}  
}  

void buildMinHeap(int arr[],int size){
	int i;
	for (i = size / 2 - 1; i >= 0; i--)  
    minHeapify(arr, size, i); 
}
  
void heapSort(int arr[], int size)  
{  
int i;  
buildMinHeap(arr,size); 
for (i=size-1; i>0; i--)  
{  
    temp = arr[0];  
    arr[0]= arr[i];   
    arr[i] = temp;  
    minHeapify(arr, i, 0);  
}  
}  
  
void main()  
{  
int arr[1000]; 
int i;  
int size;

printf("Enter size of array : ");
scanf("%d",&size);

printf("Enter elements : ");
for(i=0;i<size;i++){
	scanf("%d",&arr[i]);
} 
  
heapSort(arr, size);  
  
printf("printing sorted elements\n");  
for (i=0; i<size; ++i)  
printf("%d\n",arr[i]);  
}  
