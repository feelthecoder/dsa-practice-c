#include<stdio.h>  
int temp;  
  
void maxHeapify(int arr[], int size, int i)  
{  
int largest = i;    
int left = 2*i + 1;    
int right = 2*i + 2;    
  
if (left < size && arr[left] > arr[largest])  
largest = left;  
  
if (right < size && arr[right] > arr[largest])  
largest = right;  
  
if (largest != i)  
{  
    temp = arr[i];  
    arr[i]= arr[largest];   
    arr[largest] = temp;  
    maxHeapify(arr, size, largest);  
}  
}  

void buildMaxHeap(int arr[],int size){
	int i;
	for (i = size / 2 - 1; i >= 0; i--)  
    maxHeapify(arr, size, i); 
}
  
void heapSort(int arr[], int size)  
{  
int i;  
buildMaxHeap(arr,size); 
for (i=size-1; i>0; i--)  
{  
    temp = arr[0];  
    arr[0]= arr[i];   
    arr[i] = temp;  
    maxHeapify(arr, i, 0);  
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
