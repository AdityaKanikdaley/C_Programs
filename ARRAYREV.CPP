#include<stdio.h>
#include<conio.h>
void main()
{
char a[10][20];
int i,j,n,c;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;a[i][j]!='\0';j++);
for(c=j-1;c>=0;c--)
printf("%c",a[i][c]);
printf("\n");
}
getch();
}