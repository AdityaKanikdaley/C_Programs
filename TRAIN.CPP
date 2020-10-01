#include<stdio.h>
#include<conio.h>
void main()
{
int n,a;
clrscr();
printf("enter time\n");
scanf("%d",&n);
if(n>=12)
{
a=n-12;
printf("%d PM",a);
}
else
printf("%d AM",n);
getch();
}