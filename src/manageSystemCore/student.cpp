//
// Created by WangLuxiang on 11/20/2021.
//
#include "student.h"

Student::Student() {

}

Student::~Student() {

}

Student::Student(ID id, int age, const std::string& name, Date birthday, Date startDate) {
    this->studentID = id;
    this->studentAge = age;
    this->studentName = name;
    this->studentBirthday = birthday;
    this->studentStartDate = startDate;
}
