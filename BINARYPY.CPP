#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,c=0;
clrscr();
printf("enter series number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
printf(" ");
for(j=1;j<=2*i-1;j++)
{
c=1-c;
printf("%d",c);
}
printf("\n");
}
getch();
}
