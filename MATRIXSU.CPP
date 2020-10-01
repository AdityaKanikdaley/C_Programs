#include<stdio.h>
#include<conio.h>
void main()
{
 int matrix1[2][2],matrix2[2][2];
 int i,j,sum;
 clrscr();
 printf("enter numbers\n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  scanf("%d",&matrix1[i][j]);
 }
  printf("matrix 1\n");
  for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  printf("%d\t",matrix1[i][j]);
  printf("\n");
 }
 printf("\n");
  for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  scanf("%d",&matrix2[i][j]);
 }
  printf("matrix 2\n");
  for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  printf("%d\t",matrix2[i][j]);
  printf("\n");
 }
 printf("\n");
 printf("sum of matrix\n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
  sum=matrix1[i][j]+matrix2[i][j];
  printf("%d\t",sum);
  }
  printf("\n");
 }
 getch();
 }