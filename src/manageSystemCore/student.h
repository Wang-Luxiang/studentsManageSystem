//
// Created by WangLuxiang on 11/20/2021.
//

// 这是这个项目的第一行代码，我怀揣着梦想写下她 11/20/2021 7:30

#pragma once

#include "id.h"
#include "date.h"

#include <string>

/**
 * @brief student类头文件
 * @class 学生类
 * 学生属性
 *  @attribute  string   name       字符串型姓名
 *  @attribute  int      age        年龄
 *  @attribute  id       id         学号     单独设计id类型
 *  @attribute  date     birthday   生日     单独设计日期类型
 *  @attribute  date     startDate  入学日期
 */

// TODO:学生类型实现
class Student {
private:
    // 学生各种属性
    ID studentID;
    std::string studentName;
    int studentAge{};
    Date studentBirthday;
    Date studentStartDate;

public:
    Student();

    Student(ID id, int age, const std::string& name, Date birthday, Date startDate);

    ~Student();
};
