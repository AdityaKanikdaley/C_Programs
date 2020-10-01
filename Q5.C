#include<stdio.h>
#include<conio.h>
void fun(float x)
{ float value;
  value=(0.5*x)+5;
  printf("Value of function f(x) is: %2f",value);
}
void main()
{ float x; clrscr();
  printf("Enter value of 'x' in f(x): ");
  scanf("%2f",&x);
  fun(x);
  getch();
}