#include<stdio.h>
#include<conio.h>
int power(int n,int m)
{
if(m==0)
 return 1;
return n*power(n,m-1);
}
void main()
{
int x,y,r;
clrscr();
scanf("%d%d",&x,&y);
r=power(x,y);
printf("%d",r);
getch();
}