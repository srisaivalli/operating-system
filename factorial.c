#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int i,j,f=1;
j=strtol(argv[1],NULL,10);
for(i=1;i<=j;i++)
f=f*i;
printf("factorial of the given number is %d",f);
return 0;
}

