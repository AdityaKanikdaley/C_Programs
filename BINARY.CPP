#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,k,l,c=0;
clrscr();
printf("enter series number");
scanf("%d",&n);
l=n;
for(i=1;i<=n;i++)
{
l=n-1;
for(k=1;k<=l;k++)
printf(" ");
for(j=1;j<=2*i-1;j++)
{
c=1-c;