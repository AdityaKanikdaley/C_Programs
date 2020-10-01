#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=0,j=-1;
float k;
clrscr();
printf("enter series number\n");
do
{
scanf("%d",&n);
i=i+n;
j=j+1;
}
while(n!=0);
k=i*1.0/j;
printf("sum=%d\n\n",i);
printf("average=%.2f",k);
getch();
}