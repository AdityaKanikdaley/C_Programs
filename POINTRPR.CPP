#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<alloc.h>
void main()
{
char *p;
int i,n;
clrscr();
scanf("%d",&n);
p=(char*)malloc(sizeof(int)*n);
for(i=0;i<n;i++)
scanf("%s",p[i]);
scanf("%s",p[n]);
for(i=0;i<n;i++)
{
if(strcmp(p[i],p[n])==0)
{
printf("present");
break;
}
}
if(i==n)
printf("not present");
free(p);
getch();
}