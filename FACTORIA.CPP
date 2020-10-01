#include<stdio.h>
#include<conio.h>
int fact(int n)
{
int i=1,k=1;
do
{
k=k*i;
i++;
}
while(i<=n);
return k;
}
void main()
{
int i,n,j,k=1;
clrscr();
printf("enter two number\n");
scanf("%d",&n);
k=fact(n);
printf("factorial=%d",k);
getch();
}