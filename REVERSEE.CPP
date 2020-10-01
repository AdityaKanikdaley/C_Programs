#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i,n,j,t;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0,j=n-1;i<j;i++,j--)
{
  t=a[i];
  a[i]=a[j];
  a[j]=t;
}
for(i=0;i<n;i++)
 printf("%d\n",a[i]);
getch();
}