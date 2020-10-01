#include<stdio.h>
#include<conio.h>
void main()
{
int a[10];
int i,number,j=0;
float average;
clrscr();
scanf("%d",&number);
for(i=0;i<number;i++)
{
scanf("%d",&a[i]);
j=j+a[i];
}
printf("sum=%d\n",j);
average=j*1.0/number;
printf("average=%.2f",average);
getch();
}


