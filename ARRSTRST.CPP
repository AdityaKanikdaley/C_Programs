#include<stdio.h>
#include<conio.h>
struct student
{
 int roll,total;
 char name[20];
};
void main()
{
 struct student s[30];
 int n,i,j=0;
 clrscr();
 scanf("%d",&n);
  for(i=0;i<n;i++)
{
  scanf("%d%s%d",&s[i].roll,s[i].name,&s[i].total);
}
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
 printf("\ntopper is \n");
 printf("%d\t\t%s\t\t%d",s[j].roll,s[j].name,s[j].total);
 getch();

}









