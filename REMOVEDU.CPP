#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10];
int i,t,j,m,k,n,c=0;
clrscr();
printf("enter how many elements you want in array\n");
scanf("%d",&k);
n=k;
for(i=0;i<k;i++)
{
printf("enter arr[%d] element:",i);
scanf("%d",&arr[i]);
}
for(i=0;i<k;i++)
{
printf("%d\t",arr[i]);
}
for(i=0;i<k;i++)
{
for(j=i+1;j<n;j++)
{
if(arr[i]==arr[j])
{
for(m=j;m<n;m++)
arr[m]=arr[m+1];
c=c+1;
n--;
}
}
}
if(c==0)
printf("\narray does not contains duplicate\n");
else
printf("\narray contains duplicate\n");
printf("\narray after removing duplicate\n");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
getch();
}