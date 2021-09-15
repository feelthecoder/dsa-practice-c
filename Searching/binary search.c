#include<stdio.h>


int bSearch(int arr[],int start,int last, int item){
	while(start<=last){
		int mid = (start+last-1)/2;
		if(item==arr[mid])
		   return mid;
		else if(item>arr[mid])
		     start=mid+1;
		else
		     last=mid-1;
	}
	return -1;
}

void main(){
	int arr[1000],n,item,result,i;
	printf("Enter no. of elements : ");
	scanf("%d",&n);
	
	printf("Enter the elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter element to search : ");
	scanf("%d",&item);
	
	result = bSearch(arr,0,n,item);
	
	(result==-1)?printf("Element not found!"):printf("Element found at position %d",result+1);
	
}
