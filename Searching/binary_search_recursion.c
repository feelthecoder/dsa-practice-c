int binarySearch(int arr[], int l, int r, int x) 
{ 
   if (l<=r) 
   { 
        int mid = l + (r - l)/2; 
  
        if (arr[mid] == x)  return mid; 
  
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x); 
   
        return binarySearch(arr, mid+1, r, x); 
   } 
   return -1;
}  
  
int main(void) 
{ 
   int i,n, value,arr[1000];
    printf("Enter the total elements in the array  ");
    scanf("%d", &n);
 
    printf("Enter the array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    printf("Enter the element to search  ");
    scanf("%d", &value);
   int result = binarySearch(arr, 0, n, value); 
   (result == -1)? printf("Element is not present in array") 
                 : printf("Element is present at index %d", result+1); 
   return 0; 
} 
