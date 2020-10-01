#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10];
int i,m,n,k,j,l;
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
printf("\n enter element which you want to insert\t");
scanf("%d",&m);
printf("\n enter the position (first is zero)\t");
scanf("%d",&n);
if(n>=0 && n<=k)
{
for(j=k;j>n;j--)
arr[j]=arr[j-1];
arr[j]=m;
l=k+1;
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