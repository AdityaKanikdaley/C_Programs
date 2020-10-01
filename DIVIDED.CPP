#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  scanf("%d",&n);
  if(n%2==0)
  {
    if(n%5==0)
      printf("divided by 2 and 5");
    else
      printf("divided by 2 but not 5");
  }
  else
  {
     if(n%5==0)
      printf("divide by 5 but not 2");
     else
      printf("not divided by 2 and 5");
  }
  getch();
}