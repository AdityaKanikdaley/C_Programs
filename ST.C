#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct student
{
 int roll,total;
 char name[20];
};
void read(struct student *s,int n)
{
int i;
for(i=0;i<n;i++)
{
  scanf("%d%s%d",&s[i].roll,s[i].name,&s[i].total);
}
}
void main()
{
 struct student *s;
 int n,i,j=0;
 clrscr();
 scanf("%d",&n);
 s=(struct student *)malloc(sizeof(struct student)*n);
 read(s,n);
 printf("rollno.\t\tname\t\ttotalmarks\n");
  for(i=0;i<n;i++)
{
  printf("%d\t\t%s\t\t%d",s[i].roll,s[i].name,s[i].total);
  printf("\n");
   if(s[i].total>s[j].total)
   {
    j=i;
   }
}
 printf("\ntopper is %s",s[j].name);
 free(s);
 getch();
}