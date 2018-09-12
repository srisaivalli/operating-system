#include<stdio.h>
#include<time.h>
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
void Bubblesort(int arr[],int n)
{
int i,j;
for(i=0;i<n-1;i++)

  for(j=0;j<n-i-1;j++)
  if(arr[j]>arr[j+1])
     swap(&arr[j],&arr[j+1]);
}
 
void print(int arr[],int size)
{
 int i;
 for(i=0;i<size;i++)
	  printf("%d",arr[i]);
	 printf("\n");
}

int main()
{
int arr[]={58,24,12,38,96,74,52};
int n=sizeof(arr)/sizeof(arr[0]);
clock_t st,en;
double t;
st=clock();
Bubblesort(arr,n);//function call
en=clock();
printf("Sorted array: \n");
print(arr,n);//function call
t=(double)(en-st)/CLOCKS_PER_SEC;
printf("the time taken is %f",t);
return 0;
}



 
