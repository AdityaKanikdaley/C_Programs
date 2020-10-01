#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,f,g;
clrscr();
printf("enter quantity,amount\n");
scanf("%d%d%",&a,&b);
e=a*b;
if(e<5000)
c=0;
else
c=10;
f=e/100*c;
g=e-f;
printf("net amount=%d",g);
getch();
}
