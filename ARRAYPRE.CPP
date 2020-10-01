#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10][20];
int i,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%s",a[i]);
scanf("%s",a[n]);
for(i=0;i<n;i++)
{
if(strcmp(a[i],a[n])==0)
{
printf("present");
break;
}
}
if(i==n)
printf("not present");
getch();
}