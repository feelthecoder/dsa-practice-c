#include<stdio.h>

void Swap(int * a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}


int Partition (int arr[], int low, int high)
{
	int j;
  int pivot = arr[high];
 
  int i = (low - 1);
  for ( j = low; j <= (high - 1); j++) {
    if (arr[j] <= pivot) {
      i++;   
      Swap (&arr[i], &arr[j]); 
    }
  }
  Swap(&arr[i + 1], &arr[high]); 
  return (i + 1);
}

void QuickSort(int arr[], int low, int high)
{
  int pivot;
  if (low < high) {
    pivot = Partition(arr, low, high);
    QuickSort(arr, low, pivot - 1);
    QuickSort(arr, pivot + 1, high);
  }
}


void main(){
	int A[1000],n,i;
	printf("Enter No. of Element : ");
	scanf("%d",&n);
	printf("Enter Elements of array : ");
	for(i=0;i<n;i++)
	    scanf("%d",&A[i]);
	
	
	QuickSort(A,0,n-1) ;
	
	
	printf("Sorted Array : ");
	for(i=0;i<n;i++)
	     printf("%d ",A[i]);  
}

