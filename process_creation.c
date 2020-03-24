#include<stdio.h>
#include<sys/types.h>
int main()
{
int pid;
pid=fork();
if(pid==0)
{
printf("Hello");
}
else
{
printf(" World");
}
return 0;
}