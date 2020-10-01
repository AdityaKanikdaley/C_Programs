#include<stdio.sh>
#include<conio.h>
int power(int a,int b)
{
int i,j=1;
for(i=1;i<=b;i++)
j=j*a;
return j;
}
void main()
{
int i,j,m,n;
clrscr();
printf("enter no and power\n");
scanf("%d%d",&m,&n);
j=power(m,n);
printf("%d",j);
getch();
}