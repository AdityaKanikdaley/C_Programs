#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
int **a;
int i,j,r,c;
clrscr();
printf("enter row and column\n");
scanf("%d%d",&r,&c);
a=(int**)malloc(sizeof(int*)*r);
for(i=0;i<r;i++)
{
a[i]=(int*)malloc(sizeof(int)*c);
for(j=0;j<c;j++)
scanf("%d",&a[i][j]);
}
printf("matrix\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf("transpose\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
printf("%d\t",a[j][i]);
printf("\n");
}
for(i=0;i<r;i++)
free(a[i]);
free(a);
getch();
}