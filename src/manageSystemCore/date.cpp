//
// Created by WangLuxiang on 11/21/2021.
//

#include "date.h"

Date::Date() {
    now = time(nullptr);
    struct tm now_time{};
    localtime_s(&now_time, &now);
    this->second = now_time.tm_sec;
    this->minutes = now_time.tm_min;
    this->hour = now_time.tm_hour;
    this->day = now_time.tm_mday;
    this->month = now_time.tm_mon;
    this->year = now_time.tm_year;
    this->weekDay = now_time.tm_wday;
    this->yearDay = now_time.tm_yday;
}

Date::~Date() {

}
