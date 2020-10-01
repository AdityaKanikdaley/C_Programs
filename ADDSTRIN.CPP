#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
char b[10];
int j=0,i;
clrscr();
scanf("%s",a);
scanf("%s",b);
if(a==b)

for(i=0;a[i]!='\0' && b[i]!='\0';i++)
{
if(a[i]>b[i])
{
j=a[i]-b[i];
break;
}
else if(a[i]<b[i])
{
j=a[i]-b[i];
break;
}
}
if(a[i]!='\0' && b[i]=='\0')
printf("%d",a[i]);
else if(a[i]=='\0' && b[i]!='\0')
printf("%d",-b[i]);
else
printf("%d",j);
getch();
}



