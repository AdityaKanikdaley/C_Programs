#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10];
int i,m,j,k;
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
for(i=k;i>=0;i--)
{
for(j=i-1;j>0;j--)
{
if(arr[i]<arr[j])
{
m=arr[i];
arr[i]=arr[j];
arr[j]=m;
}
}
}
printf("\nascending order\n");
for(i=k;i>=0;i--)
{
printf("%d\t",arr[i]);
}
getch();
}