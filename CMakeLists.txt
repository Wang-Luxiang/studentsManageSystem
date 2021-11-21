cmake_minimum_required(VERSION 3.20)
project(studentsManageSystem)

set(CMAKE_CXX_STANDARD 20)

add_executable(studentsManageSystem main.cpp src/manageSystemCore/student.h src/manageSystemCore/date.h src/manageSystemCore/id.h src/manageSystemCore/student.cpp src/manageSystemCore/system.cpp src/manageSystemMysql/connectMysql.cpp src/manageSystemMysql/connectMysql.h src/manageSystemLog/log.cpp src/manageSystemLog/log.h src/manageSystemCore/date.cpp)

include_directories("D:/Program Files/MySQL/MySQL Server 8.0/include")
