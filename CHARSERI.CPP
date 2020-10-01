#include<stdio.h>
#include<conio.h>
void main()
{
char n,i,j;
clrscr();
//printf("enter a letter\n");
//scanf("%c",&n);
for(i='a';i<='z';i++)
{
for(j=i;j<='z';j++)
printf("%c ",j);
for(j='a';j<i;j++)
printf("%c ",j);
printf("\n");
}
getch();
}