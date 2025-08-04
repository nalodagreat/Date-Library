#include <iostream>
#include "Date.h"

using namespace std;
int main()
{
    Date d(1, 10, 2000);
    cout << "date to string\n";
    cout << d.dateTostring();
    Date::systemDate s;
   s= Date::getSystemDate();
   cout << "\nsystem date\n";
   cout << s.day << "/" << s.month << "/" << s.year;
}

