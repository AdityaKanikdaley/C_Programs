#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,sum=0;
float avg=0;
clrscr();
printf("enter three numbers");
scanf("%d%d%d",&a,&b,&c);
sum=(a+b+c);
printf("sum=%d\n",sum);
avg=(sum/3);
printf("avg=%.2f",avg);
getch();
}
