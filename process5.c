#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
#include<unistd.h>

#define   MAX_COUNT  200

void  ChildProcess(void);                /* child process prototype  */
void  ParentProcess(void);               /* parent process prototype */

int  main(void)
{
   ChildProcess();
   ParentProcess();
     pid_t  pid;
     pid=fork();
     if (pid == 0) 
          ChildProcess();
     else 
          ParentProcess();
return 0;
}

void  ChildProcess(void)
{
     int   i;
//     sleep(0.02);
     for (i = 1; i <= 5; i++)
{
//sleep(0.1);
for (int j=1;j<=i;j++)
{
sleep(1);
printf("*");
}
printf("\n");
//     printf("   *** Child process is done ***\n");
//     sleep(0.01);
}
}

void  ParentProcess(void)
{
     int   i;

     for (i = 1; i <= 5; i++)
        {
          for (int j=1;j<=i;j++)
	{

	sleep(1);
	printf("%d", j);

	}
//	sleep(0.05);
     printf("\n");
	
}
}
