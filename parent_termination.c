#include<stdio.h>
#include<sys/wait.h>
int main()
{
pid_t pid;
int status;
if((pid=fork())<0)
printf("fork error");
else if(pid==0)
exit(0);
if(wait(&status)!=pid)
printf("wait error");
else
printf("now parent terminating");
}