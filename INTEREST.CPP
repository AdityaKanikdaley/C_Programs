#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
printf("enter amount,rate,time\n");
scanf("%d%d%d",&a,&b,&c);
d=a*b*c;
e=d/100;
printf("interest=%d",e);
getch();
}