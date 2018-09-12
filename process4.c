#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

void childprocess(void);
void parentprocess(void);
//void process(void);



void childprocess(void)
{
int j;
for(j=4;j>=0;j--)
 printf("%s\n","*****"+j);
} 
void parentprocess(void)
{
int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
 	 printf("\n");      
}
}
/*
void process(void)
{
if(fork()==0)
	childprocess();
else
	parentprocess();
}
*/
int main(void)
{
pid_t  pid;

     pid = fork();
     if (pid == 0) 
          childprocess();
     else 
          parentprocess();
}

 

