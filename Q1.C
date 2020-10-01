#include<stdio.h>
#include<conio.h>

void main()
{int arr[10],n,i,j,k,sum=0;  clrscr();
 printf("Enter sum of how much elements? (max=10) ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
 j=0;
 while(j<n)
 { sum=sum+arr[j];
   j++;
 }
 printf("Sum of these 10 numbers is: %d",sum);
 getch();
}