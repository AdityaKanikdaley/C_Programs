#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,m,max=0;
  clrscr();
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    scanf("%d",&m);
    if(max<m)
     max=m;
  }
  printf("%d",max);
  getch();
}