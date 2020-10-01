#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,b,c;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
a=n/5;
b=n%5;
c=(a*5)+b;
printf("%d=5*%d+%d",c,a,b);
getch();
}
