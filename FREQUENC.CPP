#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i,n,m,c=0;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&m);
for(i=0;i<n;i++)
{
if(m==a[i])
c=c+1;
}
printf("frequency=%d",c);
getch();
}