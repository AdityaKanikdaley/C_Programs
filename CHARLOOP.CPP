#include<stdio.h>
#include<conio.h>
void main()
{
char n,i,j;
clrscr();
printf("enter a letter\n");
scanf("%c",&n);
for(i='a';i<=n;i++)
{
for(j=i;j<='z';j++)
printf("%c ",j);
printf("\n");
}
getch();
}