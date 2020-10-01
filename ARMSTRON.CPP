#include<stdio.h>
#include<conio.h>
void main()
{
int n,b,j=0,f,h;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
h=n;
for(;n>=10;)
{ b=n%10;
  n=n/10;
  j=j+(b*b*b);
}
 f=j+(n*n*n);

 if(f==h)
  printf("armstrong");
 else
  printf("not armstrong");

 getch();
}