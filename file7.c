#include<stdio.h>
#include<time.h>
int main()
{
int array[20],size,i,element;
clock_t st,en;
double t;
st=clock();
printf("enter the no. of element/size of the array:");
scanf("%d",&size);
printf("enter the %d values:",size);
for(i=0;i<size;i++)
 scanf("%d",&array[i]);
printf("enter the element to search:");
scanf("%d",&element);
en=clock();
//logic
for(i=0;i<size;i++)
{
if(element == array[i])
{
 printf("element is found at %d index of array",i);
}
}
if(i==size)
 printf("element is not found");
return 0;
}


/* #include<stdio.h>

#define MAX_SIZE 10

void linear_search(int[], int);

int main() {
  int arr_search[MAX_SIZE], i, element;

  printf("Simple Linear Search Example - Array and Functions\n");
  printf("\nEnter %d Elements for Searching : \n", MAX_SIZE);
  for (i = 0; i < MAX_SIZE; i++)
    scanf("%d", &arr_search[i]);

  printf("Enter Element to Search : ");
  scanf("%d", &element);

  //Linear Search Function
  linear_search(arr_search, element);

  return 0;
}

void linear_search(int fn_arr[], int element) {
  int i;
  for (i = 0; i < MAX_SIZE; i++) {

    if (fn_arr[i] == element) {
      printf("Linear Search : %d is Found at array : %d.\n", element, i + 1);
      break;
    }
  }

  if (i == MAX_SIZE)
    printf("\nSearch Element : %d  : Not Found \n", element);

}
*/


