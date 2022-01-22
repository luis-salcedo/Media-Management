//#include <Windows.h>
//#include <mysql.h>
#include <vector>
#include <thread>
#include "interface.h"

/*          FUTURE INPLEMENTATION
* make http requests for newly released movies/shows
*/
int main() {
    srand(time(NULL)); //seed random generator \\ has no purpose YET

    MYSQL* conn = NULL;
    MYSQL_RES* res = NULL;
    MYSQL_ROW row = NULL;
    
    //UserInterface(conn, res, row);
    struct Database_Connection mysqlD;
    mysqlD.server = "localhost";
    mysqlD.user = "root";
    mysqlD.password = "Rose7312!@#$%^&*";
    mysqlD.database = "media_management";
    mysqlD.port = 9000;
    conn = mysql_connection_setup(mysqlD);
    //res = mysql_execute_query(conn, "INSERT INTO shows(name) VALUES ('new show')"); adding
    UserInterface(conn, res, row, mysqlD);
    //res = mysql_execute_query(conn, "DELETE FROM shows WHERE name='new show';"); //
    //res = mysql_execute_query(conn, "select name from shows;");
    //std::cout << "Displaying database output:\n" << std::endl;

    //while ((row = mysql_fetch_row(res)) != NULL) {
    //    std::cout << row[0] << " | " <<
    //        std::endl << std::endl;
    //}

    /*
    stmt = con->createStatement();
stmt->execute("USE " EXAMPLE_DB);
stmt->execute("DROP TABLE IF EXISTS test");
stmt->execute("CREATE TABLE test(id INT, label CHAR(1))");
stmt->execute("INSERT INTO test(id, label) VALUES (1, 'a')");
    */
    mysql_free_result(res);
    mysql_close(conn);
}


//Episodes I go back to


/*      El senor de los cielso
        Season 1
        **Episode: 7, 12, 13, 16
                   22, 26, 33, 49
                   50, 51-54
                   61,62, 63
                   66, 68, 69, 71

        Season 2
        **Episode: 20, 28?, 29? , 34

        Season 3
        **Episode:

        Season 4
        **Episode:

        Season 5

        Season 6

        Season 7

        Season 8
*/
/*      The vampire dieries
        Season 1
        **Episode:
        
        Season 2
        **Episode:

        Season 3
        **Episode: 9, 21, 22

        Season 4
        **Episode: 23

        Season 5
        **Episode: 
        Season 6
        **Episode: 20, 
        Season 7
        **Episode: 12, 15, 21
        Season 8
        **Episode: 11
*/

/*      The originals
        Season 1
        **Episode: 1, 2, 5, 6, 8, 9, 21, 22
        Season 2

        Season 3

        Season 4

        Season 5
        **Episode: 12, 13
*/

/*      Senora Acero
        Season 1
        **Episode:
        
        Season 2
        **Episode:
*/

/*      El Chema
        Season 1

*/

