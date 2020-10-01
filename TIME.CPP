#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
printf("enter time in second\n");
scanf("%d",&a);
b=a/3600;
a=a%3600;
c=a/60;
a=a%60;
printf("required time= %dhour %dmin %dsec",b,c,a);
getch();
}