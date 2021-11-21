//
// Created by WangLuxiang on 11/21/2021.
//

#pragma once

#include <string>
#include <fstream>

using std::string;

/**
 * log.h
 * @brief 文件日志类
 * 用于保存文件日志记录
 */
class Log {
private:
    string log_path;
    std::ofstream log_file;

public:
    Log();

    Log(string path);

    ~Log();
};
