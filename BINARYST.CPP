#include<stdio.h>
#include<conio.h>
void binary(int a)
{
int i,j,c=0;
for(i=1;i<=a;i++)
{
for(j=1;j<=a-i;j++)
printf(" ");
for(j=1;j<=2*i-1;j++)
{
c=1-c;
printf("%d",c);
}
printf("\n");
}
}
void main()
{
int n,i,j,c;
clrscr();
printf("enter series number\n");
scanf("%d",&n);
binary(n);
getch();
}






