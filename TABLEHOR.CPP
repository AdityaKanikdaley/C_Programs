#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,i,j,c;
clrscr();
printf("enter two numbers\n");
scanf("%d%d",&m,&n);
for(i=1;i<=10;i++)
{
for(j=m;j<=n;j++)
{
c=i*j;
printf("%d*%d=%d\t",j,i,c);
}
printf("\n");
}
getch();
}
