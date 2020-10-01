#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter a no of days\n");
scanf("%d",&a);
if(a==1)
b=20;
else if(a<8)
b=a*10+10;
else
b=a*5+45;
printf("net amount=%d",b);
getch();
}