#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50][50];
	int n,m,start=0,i,j,end;
	printf("Enter the order of 2D array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
    end=n-1;
    for(start=0,end=n-1;start<=end;start++,end--){
    	for(i=start;i<end;i++)
    	printf("%d ",a[start][i]);
    	for(i=start;i<end;i++)
    	printf("%d ",a[i][end]);
    	for(i=end;i>start;i--)
    	printf("%d ",a[end][i]);
    	for(i=end;i>start;i--)
    	printf("%d ",a[i][start]);
	}
}
