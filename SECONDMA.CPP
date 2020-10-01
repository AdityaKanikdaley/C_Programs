#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i,n,c,m=0,k=0;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
m=a[0];
for(i=1;i<n;i++)
{
if(a[i]>m)
{
k=m;
m=a[i];
}
else if(a[i]>k)
k=a[i];
}
printf("%d is second maximum",k);
getch();
}