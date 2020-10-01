#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=0,a,b;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
b=n;
while(b>0)
{
a=b%10;
i=i*10+a;
b=b/10;
}
if(n==i)
printf("pallendrom number");
else
printf("not pallendrom number");
getch();
}