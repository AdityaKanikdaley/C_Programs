#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10];
int i,n,k,j,l;
clrscr();
printf("enter how many elements you want in array\n");
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("enter arr[%d] element:",i);
scanf("%d",&arr[i]);
}
for(i=0;i<k;i++)
{
printf("%d\t",arr[i]);
}
printf("\n enter the position which you want to delete(first is zero)\t");
scanf("%d",&n);
if(n>=0 && n<=k)
{
for(j=n;j<k;j++)
arr[j]=arr[j+1];;
l=k-1;
}
else
{
printf("wrong position\n");
l=k;
}
for(i=0;i<l;i++)
{
printf("%d\t",arr[i]);
}
getch();
}