#include<stdio.h>
#include<conio.h>
void main()
{
long n,i,j,c;
clrscr();
printf("enter a number\n");
scanf("%ld",&n);
for(i=1;i<=n;i++)
{
c=1;
for(j=1;j<=i;j++)
{
c=c*i;
}
printf("%ld",c);
printf("\t");
}
getch();
}