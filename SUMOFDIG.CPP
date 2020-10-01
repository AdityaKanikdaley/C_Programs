#include<stdio.h>
#include<conio.h>
void main()
{
int n,c,d=0;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(;n>0;)
{
  c=n%10;
  d=d+c;
  n=n/10;
}
printf("sum=%d",d);
getch();
}