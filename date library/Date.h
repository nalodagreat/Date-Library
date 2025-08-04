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
};

