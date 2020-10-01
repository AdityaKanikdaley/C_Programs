#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10];
char b[10];
clrscr();
scanf("%s",a);
scanf("%s",b);
strcat(b,a);
printf("%s",b);
getch();
}