#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
char str[100];
char rev[100];
printf("enter a string\t");
scanf("%s",str);
printf("the original string is %s",str);
for(i=0;str[i]!='\0';i++)
{
k=i-1;
}
for(j=0;j<i-1;j++)
{
rev[j]=str[k];
k--;
}
printf("the reverse string is %s",rev);
getch();
}
