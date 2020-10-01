#include<stdio.h>
#include<conio.h>
void read(int x[2][2]);
void display(int a[2][2])
{
int i,j;
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
}
void main()
{
int a[2][2],b[2][2],c[2][2];
int i,j;
clrscr();
printf("enter numbers\n");
read(a);
read(b);
printf("matrix 1\n");
display(a);
printf("\n");
printf("matrix 2\n");
display(b);
printf("sum\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
display(c);
getch();
}
void read(int x[2][2])
{
int i,j;
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
scanf("%d",&x[i][j]);
}
}