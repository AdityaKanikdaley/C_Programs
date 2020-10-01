#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,d;
char c;
clrscr();
printf("Enter Two Number\n");
scanf("%d%d %c",&a,&b,&c);
if(c=='+')
{
d=a+b;
printf("sum=%d",d);
}
else if(c=='-')
{
d=a-b;
printf("subtr=%d",d);
}
else if(c=='*')
{
d=a*b;
printf("multip=%d",d);
}
else if(c=='/')
{
d=a/b;
printf("divide=%d",d);
}
else
printf("invalid");
getch();
}