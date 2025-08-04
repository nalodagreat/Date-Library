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
	short getDYear()
	{
		return year;
	}
	void setDay(short day)
	{
		this->day = day;
	}
	void setMonth(short month)
	{
		this->month=month;
	}
	void setYear(short year)
	{
		this->year = year;
	}
};

