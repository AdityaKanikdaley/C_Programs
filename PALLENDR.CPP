#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=0,j,k,a,b;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
b=n;
for(;b>0;)
{
a=b%10;
i=i*10+a;
b=b/10;
}
if(n==i)
printf("pellindrom");
else
printf("not pellindrom");
getch();
}
