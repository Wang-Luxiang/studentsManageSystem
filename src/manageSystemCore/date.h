//
// Created by WangLuxiang on 11/20/2021.
//

#pragma once

#include <ctime>
#include <fstream>
#include "../manageSystemLog/log.h"
#include <string>

/**
 * date.h
 * @brief 日期类型
 * 负责记录学生出生日期及入学毕业日期等
 */

class Date {
    // TODO 日期类型实现
public:
    int second;
    int minutes;
    int hour;
    int day;
    int month;
    int year;
    int weekDay;
    int yearDay;

    time_t now;
public:
    Date();

    ~Date();

    void updateDate();

    Date operator-(Date& date);


};

std::fstream& operator<<(std::fstream log_ile, Date& date);
