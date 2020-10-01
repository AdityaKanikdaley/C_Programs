#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main()
{clrscr();
 char a,b;
 do
 {cout<<"Enter ur character: "; cin>>a;
  switch(a)
  {case 'a': cout<<"Vowel"; break;
   case 'e': cout<<"Vowel"; break;
   case 'i': cout<<"Vowel"; break;
   case 'o': cout<<"Vowel"; break;
   case 'u': cout<<"Vowel"; break;
   default : cout<<"Consonent\n";
   }
   cout<<"\nDo u want to continue?"; scanf(" %c",&b);
   }while(b=='y');
 cout<<"\nBye Bye";
 getch();
}