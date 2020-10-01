#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int length,size;
char name[20];
clrscr();
printf("enter your name\n");
scanf("%s",name);
length=strlen(name);
printf("length=%d\n",length);
size=sizeof(name);
printf("size=%d\n",size);
getch();
}