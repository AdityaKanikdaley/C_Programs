#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10];
int i,n,k,c=0;
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
printf("\n enter the element which you want to check(first is zero)\n");
scanf("%d",&n);
for(i=0;i<k;i++)
{
if(arr[i]==n)
{
printf("element exist at arr[%d]\n",i);
c=c+1;
}
}
if(c==0)
printf("element not exist");
getch();
}



