#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,i,j,c;
clrscr();
printf("enter two number\n");
scanf("%d%d",&m,&n);
for(i=m;i<=n;i++)
{
for(j=1;j<=10;j++)
{
c=i*j;
printf("%d",c);
printf("\t");
}
printf("\n");
}
getch();
}
