#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=0,j=1;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(;i<n;)
{
j=j+i;
printf("%d  ",j);
i=i+1;
}
getch();
}

