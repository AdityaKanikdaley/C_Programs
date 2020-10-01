#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=2;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
while(i<=n/2)
{
if(n%i==0)
break;
i=i+1;
}
if(i<=n/2)
printf("not a prime number");
else
printf("prime number");
getch();
}
