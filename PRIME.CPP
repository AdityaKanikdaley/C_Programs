#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=2,a,b;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(i=2;i<=n/2;i=i+1)
if(n%i==0)
break;

if(i<=n/2)
printf("not a prime number");
else
printf("prime number");
getch();
}