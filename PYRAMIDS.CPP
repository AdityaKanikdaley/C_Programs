#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{ clrscr();
 int i,j,k;
 for(i=1;i<=5;i++)
  { cout<<endl;
    for(j=5;j>=i;j--)
     cout<<j<<"  ";
    for(k=1;k<=i*2-1;k++)
     cout<<"*  ";
    for(j=5;j>=i;j--)
     cout<<j<<"  ";
    cout<<endl;
  }




getch();
}