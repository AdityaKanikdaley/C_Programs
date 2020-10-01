#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,j=1;
clrscr();
printf("enter number and power\n");
scanf("%d%d",&a,&b);
for(;b>=1;)
{
j=j*a;
b=b-1;
}
printf("result=%d",j);
getch();
}