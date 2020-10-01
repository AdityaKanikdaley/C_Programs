#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,k,l;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
printf(" ");
if(i>1)
printf("*");
for(j=1;j<=2*i-3;j++)
{
if(i==(n/2+1))
printf("*");
else
printf(" ");
}
printf("*\n",i);
}
getch();
}