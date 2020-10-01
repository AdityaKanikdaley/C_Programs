#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i,n,j,k;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
for(j=1;j<n;j++)
{
if(a[i]==a[j])
{
for(k=j;k<n-1;k++)
a[k]=a[k+1];
n--;
j--;
}
}
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
getch();
}