#include<stdio.h>
#include<conio.h>
int sum(int n)
{
if(n==0)
 return 0;
return n%10+sum(n/10);
}
void main()
{
int x,r;
clrscr();
scanf("%d",&x);
r=sum(x);
printf("%d",r);
getch();
}
