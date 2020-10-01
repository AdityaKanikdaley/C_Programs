#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i,n,ac=0,dc=0;
clrscr();
printf("enter a number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
if(a[i]<a[i+1])
ac++;
else
dc++;
}
if(dc==0)
printf("ascending");
else if(ac==0)
printf("descending");
else
printf("not a order");
getch();
}
