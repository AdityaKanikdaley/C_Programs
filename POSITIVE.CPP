#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
if(n<0)
printf("negative");
else
printf("positive");
getch();
}