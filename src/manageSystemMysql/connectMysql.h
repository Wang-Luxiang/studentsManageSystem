//
// Created by WangLuxiang on 11/20/2021.
//

#pragma once

#include <mysql.h>
#include <string>
using std::string;

class MysqlConnect {
private:
    MYSQL*  mysql_connection;
    string  mysql_url;
    int     mysql_port;
    string  mysql_user;
    string  mysql_password;
    string  dbName;
public:
    void connectMysql(string url, int port, string user, string password, string dbName) {
        mysql_connection = mysql_init(mysql_connection);
        if (mysql_connection == NULL) {

        }
    }
};
