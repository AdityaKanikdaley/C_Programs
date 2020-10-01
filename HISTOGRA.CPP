#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i,n,j;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=1;j<=a[i];j++)
printf("* ");
printf("\n");
}
getch();
}
