#include<stdio.h>

//PROGRAM FOR INSERTION SORT



void insertion_sort(int A[],int n){
	int i,j,key;
	
	for(j=1;j<n;j++){
		
		
		key=A[j];
		i=j-1;
		
		while(i>=0 && A[i]>key){
			A[i+1]=A[i];
			i=i-1;
		}
		A[i+1]=key;
	}

}

int main(){
	int A[1000],n,i;
	printf("Enter Size of Array : \n");
	scanf("%d",&n);
	
	printf("Enter the Array elements :");
	
	for(i=0;i<n;i++)
	     scanf("%d",&A[i]);
	     
	insertion_sort(A,n);
	
	printf("Sorted Array : ");
	
	for(i=0;i<n;i++)
		printf("%d ",A[i]);
		
	return 0;
	
}
