#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char name[20];
clrscr();
printf("enter your name\n");
scanf("%[^\n]s",name);
for(i=0;name[i]!=0;i++);
printf("length=%d\n",i);
getch();
}