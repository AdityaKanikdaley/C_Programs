#include<stdio.h>
#include<conio.h>

struct date
{
int month;
int day;
int year;
};

void main()
{
clrscr();
struct date today,tomorrow;
const int dayspermonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
printf("enter todays date(mm dd yyyy): ");
scanf("%i%i%i",&today.month, &today.day, &today.year);
if(today.day!=dayspermonth[today.month-1])
{
tomorrow.day=today.day+1;
tomorrow.month=1;
tomorrow.year=today.year;
}
else if(today.month==12)
{
tomorrow.day=1;
tomorrow.month=1;
tomorrow.year=today.year+1;
}
else
{
tomorrow.day=1;
tomorrow.month=today.month+1;
tomorrow.year=today.year;
}
printf("tomorrows date is %i/%i/%.2i.\n",tomorrow.month,tomorrow.day,tomorrow.year %100);
getch();
}
