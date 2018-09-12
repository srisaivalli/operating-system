#include <stdio.h> 
  
// A recursive binary search function. It returns  
// location of x in given array arr[l..n] is present,  
// otherwise -1 
int binarySearch(int arr[], int l, int n, int x) 
{ 
   if (n >= l) 
   { 
        int mid = l + (n - l)/2; 
  
        // If the element is present at the middle  
        // itself 
        if (arr[mid] == x)   
            return mid; 
  
        // If element is smaller than mid, then  
        // it can only be present in left subarray 
        if (arr[mid] > x)  
            return binarySearch(arr, l, mid-1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid+1, n, x); 
   } 
  
   // We reach here when element is not  
   // present in array 
   return -1; 
} 
  
int main(void) 
{ 
   int arr[] = {2, 3, 4, 10, 40}; 
   int n = sizeof(arr)/ sizeof(arr[0]); 
   int x = 100; 
   int result = binarySearch(arr, 0, n-1, x); 
 if (result == -1)
  printf("Element is not present in array \n");
 else
 printf("Element is present at position %d", result); 
   return 0; 
} 
