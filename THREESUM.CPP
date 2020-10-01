#include<stdio.h>
#include<conio.h>
int add(int a,int b)
{
  int c;
  c=a+b;
  return c;
}
void main()
{
  int x,y,z,t;
  clrscr();
  scanf("%d%d%d",&x,&y,&z);
  t=add(x,y);
  t=add(t,z);
  printf("%d",t);
  getch();
}