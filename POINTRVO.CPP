#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
char *a;
int i,j,n,c;
clrscr();
scanf("%d",&n);
a=(char*)malloc(sizeof(int)*n);
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
free(a);
getch();
}