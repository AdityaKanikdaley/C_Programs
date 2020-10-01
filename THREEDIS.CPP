#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
printf("enter rate,quantity\n");
scanf("%d%d",&a,&b);
c=a*b;
if(c<5000)
printf("net amount=%d",c);
else
{
if(c<10000)
{
d=c/100*10;
e=c-d;
printf("net amount=%d",e);
}
else
{
d=c/100*15;
e=c-d;
printf("net amount=%d",e);
}
}
getch();
}