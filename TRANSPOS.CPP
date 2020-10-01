#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[3][3];
int i,j;
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
printf("transpose\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d\t",a[j][i]);
printf("\n");
}
getch();
}
