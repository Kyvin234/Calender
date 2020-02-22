#include "Calendar.h"

bool checkLeap(int year)
{

    if((year%4 == 0 && year%100 != 0) || year%400 == 0)
    {
        return true;
    }
    return false;
}

int retWeekday(int year, int month, int day)
{
    int weekday = 0;
    //in zeller January and February are 13th and 14th month of previous year
    if(month == 1 || month == 2)
    {
        year--;
        month += 12;
    }
    //c = the first 2 digits of the year 
    //y = the latter 2 digits of the year 
    int c = year / 100;
    int y = year % 100;
    int temp = day + 13*(month+1)/5 + y + y/4 + 5 - c;
    weekday = temp % 7;
    return weekday;
}

void printMonth(int year, int month)
{
    return;
}
