#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{ char s[20]; int i,count=0; clrscr();
  printf("Enter the sequence of characters:\n");
  gets(s);
  for(i=0;i<strlen(s);i++)
   count+=1;
  printf("Number of characters are:(including spaces for sentence): %d",count);
  getch();
}