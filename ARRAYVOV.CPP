#include<stdio.h>
#include<conio.h>
void main()
{
char a[10][20];
int i,j,n,c=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",a[i]);
}
for(i=0;i<n;i++)
{
c=0;
for(j=0;a[i][j]!='\0';j++)
{
if(a[i][j]=='a'||a[i][j]=='e'||a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u')
c=c+1;
}
printf("%d",c);
}
getch();
}