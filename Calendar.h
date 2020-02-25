#pragma once

#include <string>
#include <cmath>
#include <vector>
#include <iostream>
#define RED     "\033[31m"      //red color
#define BLUE    "\033[34m"      //blue color
#define GREEN   "\033[32m"      //green color
#define RESET   "\033[0m"       //reset the color to default

using namespace std;

//input: year
//output: boolean variable check if the year is a leap
//interface: leap year if the year can be divided by 4 bnut not 100 or if the year can be divided by 400
//reference: https://en.wikipedia.org/wiki/Leap_year
bool checkLeap(int year);

//input: year, month and day 
//output: day of the week
//interface: using Zeller'sformula to return the week of the day
//referece: https://en.wikipedia.org/wiki/Zeller%27s_congruence
int retWeekday(int year, int month, int day);

//input: year, month and day 
//output: print all the dates of the entire month
//interface: 
void printMonth(int year, int month, int day);

//input: year, month
//output: day count of the month
//interface
int retday_Count(int year, int montn);