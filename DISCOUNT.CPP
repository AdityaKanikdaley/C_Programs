#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,f;
clrscr();
printf("enter rate,quantity and discount\n");
scanf("%d%d%d",&a,&b,&c);
d=a*b;
e=a*b/100*c;
f=d-e;
printf("net amount=%d",f);
getch();
}