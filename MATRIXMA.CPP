#include<stdio.h>
#include<conio.h>
void main()
{
char a[3][3];
int i,j,m=0;
clrscr();
printf("enter numbers\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
printf("matrix\n");
for(i=0;i<3;i++)
{
m=a[i][0];
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
if(a[i][j]>m)
m=a[i][j];
}
printf("%d\n",m);
}
getch();
}




