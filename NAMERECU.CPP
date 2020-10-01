#include<stdio.h>
#include<conio.h>
void name(char a[],int i)
{
if(a[i]=='\0')
return;
name(a,i+1);
printf("%c",a[i]);
}
void main()
{
char a[10];
clrscr();
scanf("%s",a);
name(a,0);
getch();
}






