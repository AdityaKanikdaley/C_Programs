#include<stdio.h>
#include<conio.h>
void main()
{
char n,i,j,k=0,l;
clrscr();
printf("enter a letter\n");
scanf("%c",&n);
for(i=n;i>='a';i--)
{
for(j='a';j<=i;j++)
printf("%c",j);
for(j=1;j<=2*k-1;j++)
printf(" ");
k=k+1;
if(i==n)
l=n-1;
else
l=i;
for(;l>='a';l--)
printf("%c",l);
printf("\n");
}
getch();
}
