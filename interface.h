#ifndef __USER_INTERFACE__
#define __USER_INTERFACE__
#include <Windows.h>
#include <vector>
#include "typewriter.h"
#include "management.h"
#include "database_setup.h"


/*              TO DO
* finish polishing outputing to shows
* complete remaining sections from shows
* complete all remaining movie sections
*/

void UserInterface(MYSQL* conn, MYSQL_RES* res, MYSQL_ROW row, Database_Connection mysqlD) {
    //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (1 + rand() % 15));
    typewriter::print("\t\t\t\t\t\[*]Media Stream[*]\n\n", 20);
    int pointer = 0;
    std::vector<std::string> mainMenu = {
        "My Movies",
        "My Shows",
        "[!]Exit[!]" };
    while (true) {
        system("cls"); //clear the screen
        //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (1 + rand() % 15));
        std::cout << "\t\t\t\t\t[*]Media Stream[*]" << std::endl;
        for (int i = 0; i < mainMenu.size(); i++) {
            if (i == pointer) {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                std::cout << "\t-> "; typewriter::print(mainMenu[i], 20); std::cout << " <-\n";
            }
            else {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                std::cout << "\t" << mainMenu[i] << "\n";
            }
        }//end forloop

        while (true) {
            if (GetAsyncKeyState(VK_UP) != 0) {
                pointer -= 1;
                if (pointer == -1) {
                    pointer = mainMenu.size();
                }
                break;
            }

            else if (GetAsyncKeyState(VK_DOWN) != 0) {
                pointer += 1;
                if (pointer == mainMenu.size()) {
                    pointer = 0;
                }
                break;
            }

            else if (GetAsyncKeyState(VK_ESCAPE) != 0) {
                system("cls"); //clear the screen
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (1 + rand() % 15));
                typewriter::print("\tExiting Now...\n", 20);
                exit(0);
            }

            else if (GetAsyncKeyState(VK_SPACE) != 0) {
                switch (pointer) {
                    //Movies
                case 0: //
                {
                    //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (1 + rand() % 15));
                    typewriter::print("\t\t\t\t\t\[*]My Movies[*]\n\n", 20);
                    int myMoviesPointer{ 0 };

                    std::vector<std::string> myMoviesMenu = { //vector to hold menu items
                        "Display All Movies",
                        "Add New Movie",
                        "Remove Movie",
                        "[!]Exit[!]"
                    };
                    while (true) {
                        system("cls"); //clear the screen
                        //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (1 + rand() % 15));
                        printf("\t\t\t\t\t[*]My Movies[*]\n");
                        for (int i = 0; i < myMoviesMenu.size(); i++) {
                            if (i == myMoviesPointer) {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                                std::cout << "\t-> "; typewriter::print(myMoviesMenu[i], 20); std::cout << " <-\n";
                            }
                            else {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                                std::cout << "\t" << myMoviesMenu[i] << "\n";
                            }
                        }//end forloop

                        while (true) {
                            if (GetAsyncKeyState(VK_UP) != 0) {
                                myMoviesPointer -= 1;
                                if (myMoviesPointer == -1) {
                                    myMoviesPointer = myMoviesMenu.size();
                                }
                                break;
                            }

                            else if (GetAsyncKeyState(VK_DOWN) != 0) {
                                myMoviesPointer += 1;
                                if (myMoviesPointer == myMoviesMenu.size()) {
                                    myMoviesPointer = 0;
                                }
                                break;
                            }

                            else if (GetAsyncKeyState(VK_ESCAPE) != 0) {
                                system("cls"); //clear the screen
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (1 + rand() % 15));
                                typewriter::print("\tExiting Now...\n", 20);
                                exit(0);
                            }

                            else if (GetAsyncKeyState(VK_SPACE) != 0) {
                                switch (myMoviesPointer) {
                                    //"Display All Movies",
                                case 0:
                                {

                                    [[fallthrough]];
                                }

                                    //"Add New Movie",
                                case 1: {
                                    //std::cout << Media{}.addNewEntry("");
                                }

                                   //"Remove Movie",
                                case 2: {

                                }
                                   //Exit
                                case 3:
                                {
                                    exit(EXIT_SUCCESS); //quit the program with success
                                }
                                default:
                                    break;
                                }//end switch
                            } //end return else
                        }
                    }//end main while loop
                }

                //shows
                case 1: //shows
                {

                    //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (1 + rand() % 15));
                    typewriter::print("\t\t\t\t\t\[*]My Shows[*]\n\n", 20);
                    int myMoviesPointer{ 0 };

                    std::vector<std::string> myMoviesMenu = { //vector to hold menu items
                        "Display All Shows",
                        "Add New Show",
                        "Remove Show",
                        "[!]Exit[!]"
                    };
                    while (true) {
                        system("cls"); //clear the screen
                        //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (1 + rand() % 15));
                        printf("\t\t\t\t\t[*]My Shows[*]\n");
                        for (int i = 0; i < myMoviesMenu.size(); i++) {
                            if (i == myMoviesPointer) {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                                std::cout << "\t-> "; typewriter::print(myMoviesMenu[i], 20); std::cout << " <-\n";
                            }
                            else {
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
                                std::cout << "\t" << myMoviesMenu[i] << "\n";
                            }
                        }//end forloop

                        while (true) {
                            if (GetAsyncKeyState(VK_UP) != 0) {
                                myMoviesPointer -= 1;
                                if (myMoviesPointer == -1) {
                                    myMoviesPointer = myMoviesMenu.size();
                                }
                                break;
                            }

                            else if (GetAsyncKeyState(VK_DOWN) != 0) {
                                myMoviesPointer += 1;
                                if (myMoviesPointer == myMoviesMenu.size()) {
                                    myMoviesPointer = 0;
                                }
                                break;
                            }

                            else if (GetAsyncKeyState(VK_ESCAPE) != 0) {
                                system("cls"); //clear the screen
                                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (1 + rand() % 15));
                                typewriter::print("\tExiting Now...\n", 20);
                                exit(0);
                            }

                            else if (GetAsyncKeyState(VK_SPACE) != 0) {
                                switch (myMoviesPointer) {
                                    //"Display All Shows",
                                case 0:
                                {
                                    std::system("cls");
                                    conn = mysql_connection_setup(mysqlD);
                                    //res = mysql_execute_query(conn, "insert into media_management shows (name) values(king luis);");
                                    res = mysql_execute_query(conn, "select * from shows;");
                                    std::cout << "Displaying database output:\n" << std::endl;

                                    while ((row = mysql_fetch_row(res)) != NULL) {
                                        std::cout << row[0] << " | " <<
                                            std::endl << std::endl;
                                    }
                                    //UserInterface(conn, res, row, mysqlD);
                                    EXIT_SUCCESS;
                                    [[fallthrough]];
                                }

                                //"Add New Show",
                                case 1: {
                                    
                                    std::string userInput = {NULL};
                                    std::cout << "Add Show: ";

                                    std::getline(std::cin, userInput);
                                    auto command = "INSERT INTO shows(name) VALUES"  " ('" + userInput + "');";
                                    const char* test = command.c_str();
                                    if(userInput != "")
                                        res = mysql_execute_query(conn, test);
                                    else {
                                        std::cout << "SQL Query Error: " << mysql_error << std::endl;
                                    }
                                    //UserInterface(conn, res, row, mysqlD);
                                    EXIT_SUCCESS;
                                    [[fallthrough]];
                                }

                                      //"Remove Show",
                                case 2: {
                                    std::string userInput;
                                    std::string table = "shows";
                                    std::string row = "name";
                                    std::string query = "DELETE FROM ";
                                    query += table + " WHERE " + row + "='";
                                    std::cout << "\tRemove Show: ";
                                    std::getline(std::cin, userInput);
                                    query += userInput + "';";
                                                
                                    const char* command = query.c_str();
                                    if (userInput != "") {
                                        res = mysql_execute_query(conn, command);
                                    }
                                    if (mysql_query(conn, command)) {
                                        std::cout << "\tThere was an error with the sql query!\n" <<
                                            "\tSQL ERROR: " << mysql_error << std::endl;
                                    }
                                    if (userInput == "") {
                                        std::cout << "\tYou're tring to remove an empty string..." << std::endl;
                                        EXIT_FAILURE;
                                    }
                                    EXIT_SUCCESS;
                                }
                                      //Exit
                                case 3:
                                {
                                    exit(EXIT_SUCCESS); //quit the program with success
                                }
                                default:
                                    break;
                                }//end switch
                            } //end return else
                        }
                    }//end main while loop
                } // end Shows

                case 2: //Exit
                {
                    exit(EXIT_SUCCESS); //quit the program with success
                }
                default:
                    break;
                }//end switch
            } //end return else
        }
    }//end main while loop
}//end userInterface()

#endif