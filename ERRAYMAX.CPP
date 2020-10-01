#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
int *a;
int i,n,m=0;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
a=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]>m)
m=a[i];
}
printf("%d is maximum",m);
free(a);
getch();
}
