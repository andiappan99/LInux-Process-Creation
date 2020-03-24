#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
int sum=0,n;
for(int i=0;i<5;i++)
{
printf("enter five numbers:");
scanf("%d",&n);
sum=sum+n;
}
printf("sum:%d",sum);
char *args[]={"./fo",NULL};
execv(args[0],args);
return 0;
}