#include<stdio.h>

int LSearch(int arr[],int n, int item){
	int i,pos=0;
	for(i=0;i<n;i++){
		if(item==arr[i]){
		
		 pos = i;
		 break;
	}
	}
	
	return pos;
}
int main()
{
    int i,n, value, pos=0, m = 0, arr[100];
    printf("Enter the total elements in the array  ");
    scanf("%d", &n);
 
    printf("Enter the array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    printf("Enter the element to search  ");
    scanf("%d", &value);
 
    pos =  LSearch(arr,n,value);
    if (pos != 0)
    {
        printf("Element found at pos %d ", pos+1);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}
