/* 
 * File:   example02.cpp
 * Author: Dimitar
 *
 * Created on April 18, 2015, 4:58 PM
 */

#include <iostream>
#include <cstdio>

using namespace std;

class Date {
private:
    int day, month, year;

public:

    Date(int day, int month, int year) {
        SetDay(day);
        SetMonth(month);
        SetYear(year);
    }

    int getDay() const {
        return day;
    }

    void setDay(int day) {
        // ... 
        this->day = day;
    }

    int getMonth() const {
        return month;
    }

    void setMonth(int month) {
        this->month = month;
    }

    int getYear() const {
        return year;
    }

    void setYear(int year) {
        this->year = year;
    }

    void show() const {
        printf("%02d.%02d.%d", day, month, year);
    }
};

class Time {
private:
    int hour, minute;

public:

    Time(int hour, int minute) :
    hour(hour), minute(minute) {
    }

    int getHour() const {
        return hour;
    }

    void setHour(int hour) {
        this->hour = hour;
    }

    int getMinute() const {
        return minute;
    }

    void setMinute(int minute) {
        this->minute = minute;
    }

    void show() const {
        printf("%04d:%02d", hour, minute);
    }
};

class DateTime : public Date, public Time {
public:

    DateTime(int day, int month, int year, int hour, int minute) :
    Date(day, month, year), Time(hour, minute) {
    }

    void show() const {
        Date::show();
        cout << " ";
        Time::show();
        cout << endl;
    }

};

/*
 * 
 */
//int main() {
//
//    const DateTime dt(18, 4, 2015, 17, 5);
//    dt.show();
//
//    cout << dt.GetDay() << endl;
//    
//    return 0;
//}

