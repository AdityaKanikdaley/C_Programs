#include<stdio.h>
#include<conio.h>
void main()
{
char nm[20];
int i,c;
clrscr();
scanf("%[^\n]s",nm);
for(i=1;nm[i]!='\0';i++)
c=i;
for(i=i-1;i>=0;i--)
printf("%c",nm[i]);
getch();
}