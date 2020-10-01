#include<stdio.h>
#include<conio.h>

void main()
{int arr[10],n,i,j,k,sum=0;  clrscr();
 printf("Enter 10 elements into the array:\n");
 printf("Enter sum of how much elements? ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
 j=0;
 while(j<10)
 { sum+=arr[j];
   j++;
 }

 printf("Sum of these 10 numbers is: ");
 for(k=0;i<10;k++)
  printf("%d",arr[k]);
 getch();
}