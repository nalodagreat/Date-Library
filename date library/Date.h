#pragma once
#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
	short day;
	short month;
	short year;
public:

	Date(short day, short month, short year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
	short getDay()
	{
		return day;
	}
	short getmonth()
	{
		return month;
	}
	short getyear()
	{
		return year;
	}
	void setDay(short day)
	{
		this->day = day;
	}
	void setmonth(short month)
	{
		this->month = month;
	}
	void setyear(short year)
	{
		this->year = year;
	}

private:
	static string concatinateDate(short day, short month, short year)
	{
		string concatinateDate = "", separator = "/";
		concatinateDate +=to_string(day);
		concatinateDate += separator + to_string(month);
		return concatinateDate += separator + to_string(year);
	}
public:
	static string dateTostring(Date date)
	{
		return concatinateDate(date.day, date.month, date.year);
	}
	string dateTostring()
	{
		return dateTostring(*this);
	}
	struct systemDate
	{
		short day;
		short month;
		short year;
	};
	static systemDate getSystemDate()
	{
		systemDate systemDate;
		time_t t = time(0);
		tm now = {};
		localtime_s(&now, &t);
		systemDate.day = now.tm_mday;
		systemDate.month = now.tm_mon + 1;
		systemDate.year = now.tm_year + 1900;
		return systemDate;
	}
	static bool Isdate1Beforedate2(Date date1, Date date2)
	{
		return (date1.year < date2.year)
			? true
			: ((date1.year == date2.year)
				? (date1.month < date2.month
					? true
					: (date1.month == date2.month
						? date1.day < date2.day
						: false))
				: false);
	}
	bool IsDateBeforeDate2(Date date2)
	{ 
		//note: *this sends the current object :-)
		return  Isdate1Beforedate2(*this, date2);
	}
	static bool isLeapYear(short year) 
	{
		// if year is divisible by 4 AND not divisible by 100// OR if year is divisible by 400// then it is a leap year 
		return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);  
	}
	bool isLeapYear()
	{
		isLeapYear(year);
	}
};

