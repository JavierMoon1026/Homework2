#include <iostream>
#include <iomanip>
#pragma once

using namespace std;

class Time{
    private:
        int hour;
        int minute;
        int second;
        bool isAm;
    public:
        Time(int h = 0, int min = 0, int sec = 0, string period = "a.m.");

        void setHour(int h);
        void setMinute(int sec);
        void setSecond(int min);
        void setPeriod(string period);

        int getHour() const;
        int getMinute() const;
        int getSecond() const;
        string getPeriod() const;

        void show12h() const;
        void show24h() const;
};