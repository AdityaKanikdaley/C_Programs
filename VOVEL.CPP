#include<stdio.h>
#include<conio.h>
void main()
{
char nm[20];
int i,c=0;
clrscr();
scanf("%[^\n]s",nm);
for(i=0;nm[i]!='\0';i++)
{
if(nm[i]=='a'||nm[i]=='e'||nm[i]=='i'||nm[i]=='o'||nm[i]=='u')
c=c+1;
}
printf("%d",c);
getch();
}