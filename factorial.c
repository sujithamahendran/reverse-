#include<stdio.h>
int main()
{
int n,i;
unsigned long long factorial=1;
printf("enter an integer:");
scanf("%d",&n);
if(n<0)
printf("error! factorial of a negative number doesnt exist.");
else
{
for(i=1;i<=n;++i)
{
factorial *=i;
}
printf("factorial of %d=%11u",n,factorial);
}
return 0;
}
