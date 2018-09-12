#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<fcntl.h>

void client(int,int);
void server(int,int);

void main()
{
    int pipe1[2],pipe2[2];
    pid_t pid;
    pipe(pipe1);
    pipe(pipe2);
    char buff[80];
    pid=fork();
    if(pid==0)
    {   
    
        close(pipe1[1]);
        close(pipe2[0]);
        server(pipe1[0],pipe2[1]);
    }
    else
    {
        close(pipe1[0]);
        close(pipe2[1]);
        client(pipe2[0],pipe1[1]);
    }
}

void client(int readfd,int writefd)
{
    int len,n;
    char buff[80];
    printf("Enter the path name\n");
    // char *fgets(char *s, int size, FILE *stream);
    fgets(buff,80,stdin);
    len=strlen(buff);
    if(buff[len-1]=='\n')
        len--;
    //ssize_t write(int fd, const void *buf, size_t count); 
    write(writefd,buff,len);
    while((n=read(readfd,buff,80))>0)
        write(STDOUT_FILENO,buff,n);
}

void server(int readfd,int writefd)
{
    int fd,n;
    char buff[80];
    //ssize_t read(int fd, void *buf, size_t count); 


    n=read(readfd,buff,80);
    buff[n]='\0';
    fd=open(buff,O_RDONLY);
    while((n=read(fd,buff,80))>0)
        write(writefd,buff,n);
    close(fd);
}0
