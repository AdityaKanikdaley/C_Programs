#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1,m,a,b;
clrscr();
printf("enter number");
scanf("%d",&n);
for(;i<=n;)
{
b=m;
scanf("%d",&m);
a=m;
i=i+1;
if(a>b)
printf("%d is maximum",a);
else
printf("%d is minimum",b);
}
getch();
}


