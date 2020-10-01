#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
printf(" ");
if(i>1)
printf("%d",i);
for(j=1;j<=2*i-3;j++)
printf(" ");
printf("%d\n",i);
}
for(i=n-1;i>=1;i--)
{
for(j=1;j<=n-i;j++)
printf(" ");
if(i>1)
printf("%d",i);
for(j=1;j<=2*i-3;j++)
printf(" ");
printf("%d\n",i);
}

getch();
}

