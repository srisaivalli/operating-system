#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int a = atoi(argv[1]);
printf("%d",a);
printf("\n");
int f=1;
while(a>0)
{
f=f*a;
a=a-1;
}
printf("Factorial of  the given number is: %d",f);
printf("\n");
}

