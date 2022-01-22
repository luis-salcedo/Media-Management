#ifndef __DATABSE_SETUP__
#define __DATABSE_SETUP__
#include <iostream>
#include <mysql.h>

struct Database_Connection {
    const char *server, *user, *password, *database;
    unsigned int port;
};

MYSQL* mysql_connection_setup(struct Database_Connection mysql_connection) {
    MYSQL* connection = mysql_init(NULL);
    if (!mysql_real_connect(connection, mysql_connection.server, mysql_connection.user, mysql_connection.password,
        mysql_connection.database, mysql_connection.port, NULL, 0)) {
        std::cout << "Connection Error: " << mysql_error(connection) << std::endl;
        EXIT_FAILURE;
    }
    return connection;
}

MYSQL_RES* mysql_execute_query(MYSQL* connection, const char* sql_query) {
    if (mysql_query(connection, sql_query)) {
        std::cout << "MYSQL Query Error: " << mysql_error(connection) << std::endl;
        EXIT_FAILURE;
    }
    return mysql_use_result(connection);
}

#endif