#include "Calendar.h"


bool checkLeap(int year)
{

    if((year%4 == 0 && year%100 != 0) || year%400 == 0)
    {
        return true;
    }
    return false;
}

int retday_Count(int year, int month)
{
    if(month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    else if(month == 2)
    {
        if(checkLeap(year))
            return 29;
        else 
            return 28;
    }
    else
    {
        return 31;
    }
    return -1;
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

void printMonth(int year, int month, int day)
{
    int start; //the start day of the week 
    start = retWeekday(year, month, day);
    cout << BLUE << "  SUN    MON    TUE    WED    THU    FRI    SAT  " << RESET << endl;
    //print the blank to reach the start of the calendar date 
    for(int i = 0; i < start; i++)
    {

        cout << "|     |";
    }
    for(int i = 1; i <= retday_Count(year, month); i++)
    {

        if(i > 9)
        {  
            if(i == day)
                cout << "|  " << RED << i << RESET << " |";
            else    
                cout << "|  " << i << " |";

        }
        else
        {
            if(i == day)
                cout << "|  " << RED << i << RESET << "  |";
            else 
                cout << "|  " << i << "  |";
        }
        if(start == 0 && i % 7 == 0)
        {
            cout << endl;
        }
        else if(start != 0 && i % 7 == 7 - start)
        {
            cout << endl;
        }
    }
    cout << endl;
    
    return;
}
