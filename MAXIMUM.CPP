#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter two number\n");
scanf("%d%d",&a,&b);
if(a>b)
printf("%d is maximum",a);
else
printf("%d is maximum",b);
getch();
}