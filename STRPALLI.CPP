#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{ clrscr();
  char s[20],t[20],temp;
 printf("Enter ur string: "); gets(s);

  strcpy(t,s);

 int i,j=strlen(s)-1;
  for(i=0;i<j;i++,j--)
   { temp=s[i];
     s[i]=s[j];
     s[j]=temp;
   }
 printf("reversed string is: "); puts(s);

 if(strcmp(t,s)==0)
  printf("Its pallindrome string");
 else printf("Not pallindrome string");
 getch();
}