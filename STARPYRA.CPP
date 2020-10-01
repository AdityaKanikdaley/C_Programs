#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{ int n,i,j;
  cout<<"enter rows: "; cin>>n;
  for(i=1;i<=n;i++)
  { for(j=i;j<n;j++)
     cout<<" ";
    for(j=1;j<=(2*i-1);j++)
     cout<<"*";

  cout<<endl;
  }
getch();
}