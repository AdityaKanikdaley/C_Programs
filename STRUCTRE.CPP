#include<stdio.h>
#include<conio.h>
void read(int a[10],int n)
{
int i;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
}
void reverse(int a[10],int n)
{
int i,j;
for(i=0,j=n-1;i<n;i++,j--)
{
a[i]=a[j];
}
}
void display(int a[10],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d",a[i]);
}
void main()
{
int i,j,n;
clrscr();
printf("enter a number\n");
read(n);
read(a[i]);
display(a[i]);
getch();
}


