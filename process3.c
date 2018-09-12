#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>

#define MAX_COUNT 5

void childprocess(void);
void parentprocess(void);

int main(void)

{
	pid_t pid;
	pid=fork();
	if(pid==1)
	 childprocess();
	else
	parentprocess();
return 0;}

void childprocess(void)

{
	int i;
 for(i=1;i<=MAX_COUNT;i++)
	printf("this line is from child,value=%d\n",i);
 printf("***Childprocess is done***\n");
}

void parentprocess(void)

{
	int i;
for(i=1;i<=MAX_COUNT;i++)
	printf("this line is from parent,value=%d\n",i);
printf("***Parentprocess is done***\n"); }

 

