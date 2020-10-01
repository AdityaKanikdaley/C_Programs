#include<stdio.h>
#include<conio.h>
void bin(int n)
{
  if(n==0)
   return;
  bin(n/2);
  printf("%d",n%2);


}
void main()
{
  int n;
  clrscr();
  scanf("%d",&n);
  bin(n);
  getch();
}