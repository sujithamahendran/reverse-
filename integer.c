#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
char inputstring[20];
printf("enter a string for integer conversion\n");
gets(inputstring);
printf("integer:%d\n",atoi(inputstring));
getch();
return 0;
}
