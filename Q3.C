#include<stdio.h>
#include<conio.h>

void main()
{ int a=5,*p;
clrscr();
 p=&a;
 printf("Value of 'a' is: %d",a);
 printf("\n");
 printf("Here pointer access the actual value: %d",*p);
 printf("\n");

 printf("Address of actual value through pointer: %p",&p);
 getch();
}