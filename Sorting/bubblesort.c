#include<stdio.h>

void bubbleSort(int A[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
}

int main(){
	int i;
	int arr[]={2,9,7,56,34,1,0,3,4,52,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,n);
	for(i=0;i<n;i++)
	  printf("%d ",arr[i]);
	return 0;
}
