#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i,n,c=0,b=0;
float d;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
c=c+a[i];
}
d=c*1.0/n;
printf("sum=%d\n",c);
printf("average=%.2f",d);
getch();
}
