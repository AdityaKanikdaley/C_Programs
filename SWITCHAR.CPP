#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,n;
clrscr();
printf("enter two number\n");
scanf("%d%d%d",&a,&b,&n);
switch(n)
{
case 1:
c=a+b;
printf("sum=%d",c);
break;
case 2:
c=a-b;
printf("subtr=%d",c);
break;
case 3:
c=a*b;
printf("multip=%d",c);
break;
case 4:
c=a/b;
printf("divide=%d",c);
break;
}
getch();
}