#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i,n,j,m=0;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(a[i]>m)
m=a[i];
}
for(j=m;j>=1;j--)
{
for(i=0;i<n;i++)
{
if(j<=a[i])
printf("*\t");
else
printf(" \t");
}
printf("\n");
}
getch();
}
