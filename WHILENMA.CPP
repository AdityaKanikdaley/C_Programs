#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1,a,b=0;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
while(i<=n)
{
scanf("%d",&a);
if(a>b)
b=a;
i=i+1;
}
printf("%d is maximum",b);
getch();
}