#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter a no\n");
scanf("%d",&n);
switch (n)
{
case 11:
case 12:
case 1:
case 2:
printf("winter season");
break;
case 3:
case 4:
case 5:
case 6:
printf("summer season");
break;
case 7:
case 8:
case 9:
case 10:
printf("rainy season");
break;
}
getch();
}