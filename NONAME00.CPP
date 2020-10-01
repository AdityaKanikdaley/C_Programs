#include<conio.h>
#include<stdio.h>

void main()
{clrscr();
 int i,j,A[2][2],B[2][2],sum[2][2];

 printf("Enter elements in 1st array:\n");
  for(i=0;i<2;i++)
   for(j=0;j<2;j++)
    scanf("%d",&A[i][j]);

  printf("Enter elements in 2nd array:\n");
  for(i=0;i<2;i++)
   for(j=0;j<2;j++)
    scanf("%d",&B[i][j]);

  printf("\n1st matrix is:");
  for(i=0;i<2;i++)
  {printf("\n");
   for(j=0;j<2;j++)
    {printf("%d ",A[i][j]);}
  }

 printf("\n2nd matrix is:");
  for(i=0;i<2;i++)
  {printf("\n");
   for(j=0;j<2;j++)
    {printf("%d ",B[i][j]);}
  }


  for(i=0;i<2;i++)
   {for(j=0;j<2;j++)
    {sum[i][j]=A[i][j]+B[i][j];}
   }


 printf("\nSum is:");
 for(i=0;i<2;i++)
  {printf("\n");
   for(j=0;j<2;j++)
    {printf("%d ",sum[i][j]);}
  }

  getch();
}

