#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
clrscr();
printf("enter series number\n");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(j=i;j>=1;j--)
printf("%d ",j);
printf("\n");
}
getch();
}