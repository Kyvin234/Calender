/* Your code here! */

#include "Calendar.h"

#include <string>
#include <cmath>
#include <vector>
#include <iostream>

using namespace std;





int main() 
{
    int y, d, m;
    vector<string> months{"", "January","February","March","April","May","June","July","August","September","October","November","December"};
    vector<string> weekdays{"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday",};
    cout << "Welcome to the Calendar!!"<< endl;
    cout << "please enter the year: " << endl;
    cin >> y;
    cout << "please enter the month: "<< endl;
    cin >> m;
    cout << "please enter the date: "<< endl;
    cin >> d;
    //check for Validity 
    //when the date or month is out of bound 
    if(m > 12 || d > 31)
    {
        cout << "month or date too big!! please try again" << endl;
        return -1;
    }
    //check casese for February 
    else if(m == 2)
    {
        //February for leap year onlh has up to 28 days
        if(!checkLeap(y))
        {
            if(d > 28)
            {
                cout << "It's not a leap year, please try again" << endl;
                return -1;
            }
        }
        //ordinary year's February has up to 29 days
        else
        {
            if(d > 29)
            {
                cout << "Febuary only has at most 29 days, please try again" << endl;
                return -1;
            }
        }
    }
    else 
    {

        if((m == 2 || m == 4 || m == 6 || m == 9 || m == 11) && m == 31) //2, 4, 6, 9, 11 only has 30 days max
        {
            cout << "input month only has 30 days! please try again" << endl;
            return -1;
        }
    }
    cout << "             " << GREEN << months[m] << " " << d << ", " << y << " " << "is a " << weekdays[retWeekday(y,m,d)] << RESET << endl;
    printMonth(y,m,d);
    return 0;
}
