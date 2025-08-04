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
	short getMonth()
	{
		return month;
	}
	short getYear()
	{
		return year;
	}
	void setDay(short day)
	{
		this->day = day;
	}
	void setMonth(short month)
	{
		this->month = month;
	}
	void setYear(short year)
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
};

