#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{ char s[20],t[20],temp;  int i,j;
 clrscr();
 printf("Enter number/string: "); gets(s);
 strcpy(t,s);
  j=strlen(s)-1;
  for(i=0;i<j;i++,j--)
   { temp=s[i];
     s[i]=s[j];
     s[j]=temp;
   }
 printf("Its reverse is: "); puts(s);

 if(strcmp(t,s)==0)
  printf("Its Same as backwards!");
 else printf("Its not same backwards!");
 getch();
}