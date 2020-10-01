#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,k;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(i=0,j=0;i<=n;j=j+i,i=i+1);
printf("sum=%d",j);
getch();
}