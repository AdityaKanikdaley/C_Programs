#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(j=n;j>=i;j--)
printf("%d ",j);
printf("\n");
}
getch();
}
