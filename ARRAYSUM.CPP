#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i,n,c=0,d=0;
float av;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
c=a[i]+c;
}
av=c*1.0/n;
printf("average=%f\n",av);
for(i=0;i<n;i++)
{
if(a[i]>av)
d=d+1;
}
printf("%d",d);
getch();
}

