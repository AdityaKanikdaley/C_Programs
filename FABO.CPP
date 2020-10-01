#include<iostream.h>
#include<stdio.h>
#include<conio.h>

void main()
{clrscr();
 int i,m=0,n,o=1,k;
 cout<<"Enter till when? "; cin>>n;
 cout<<m<< " "<<o<<" ";
 for(i=2;i<=n;i++)
  {k=m+o;
   cout<<k<<" ";
   m=o;
   o=k;
  }
 getch();
}