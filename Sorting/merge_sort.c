#include<stdio.h>


/*PROGRAM FOR MERGE SORT*/

void merge(int arr[], int p, int q, int r)
{
int i, j, k;
int n1 = q - p + 1;
int n2 = r - q;
int L[n1], R[n2];

for (i = 0; i < n1; i++)
     L[i] = arr[p + i];
for (j = 0; j < n2; j++)
     R[j] = arr[q + 1+ j];
i = 0;
j = 0;
k = p;
while (i < n1 && j < n2)
{
 if (L[i] <= R[j])
  {
    arr[k] = L[i];
    i++;
  }
  else
  {
    arr[k] = R[j];
    j++;
  }
 k++;
}

while (i < n1)
{
   arr[k] = L[i];
   i++;
   k++;
}
while (j < n2)
{
   arr[k] = R[j];
   j++;
   k++;
}
}


void mergeSort(int arr[], int p, int r)
{
if (p < r)
{
  int q = floor((p+r)/2);
  mergeSort(arr, p, q);
  mergeSort(arr, q+1, r);
  merge(arr, p, q, r);
}
}

void main(){
	int a[1000],n,i,size;
	printf("Enter No. of Element : ");
	scanf("%d",&n);
	printf("Enter Elements of array : ");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	
	
	mergeSort(a,0,n) ;
	
	
	printf("Sorted Array : ");
	for(i=0;i<n;i++)
	     printf("%d ",a[i]);  
}
