#include<stdio.h>
#include<conio.h>
void main()
{
char a[3][3];
int i,j,m,b=0;
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
for(j=0;j<3;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf("enter a number\n");
scanf("%d",&m);
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
if(a[i][j]==m)
{
printf("%d,%d",i+1,j+1);
break;
}
if(j<3)
break;
}

if(i==3)
printf("not availaible");
getch();
}