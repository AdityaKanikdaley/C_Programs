#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i,n,m,b=0;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&m);
for(i=0;i<n;i++)
if(m==a[i])
{
printf("present");
break;
}
if(i==n)
printf("not present");
getch();
}

