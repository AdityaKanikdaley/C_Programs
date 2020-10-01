#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,a,b,c=0;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=2*i-1;j++)
{
printf("%d",(i+j+1)%2);
}
printf("\n");
}
getch();
}