#include<stdio.h>
#include<stdlib.h>
//function to return fact value of n
int fact(int n)
{
if (n==0)
return 1;

else
{
int ans=1;//temporary value
int i;
for(i=1;i<=n;i++)
{
ans=ans*i;
}
return ans;
	}
}


int main(int argc,char* argv[])
{
if(argc==1)//argc count starts from atleast 1
{
printf("no command line argument exist.Please provide them first:");
return 0;
}
else
{
int i,n,ans;
for(i=1;i<argc;i++)
{
n=atoi(argv[i]);
//get ans from function
ans=fact(n);//recursive function
printf("%d\n",ans);
}
return 0;
	}
}



