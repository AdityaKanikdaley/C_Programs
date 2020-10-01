#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z,big;
clrscr();
printf("enter three number\n");
scanf("%d%d%d",&x,&y,&z);
big=x;
if(big<y)
big=y;
if(big<z)
big=z;
printf("%d is max",big);
getch();
}