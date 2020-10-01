#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,i=1,j=1;
clrscr();
printf("enter number and power\n");
scanf("%d%d",&m,&n);
while(i<=n)
{
j=j*m;
i=i+1;
}
printf("result=%d",j);
getch();
}
