//#include <Windows.h>
//#include <mysql.h>
#include "typewriter.h"
#include "interface.h"
#include <iostream>
#include <vector>
#include <thread>

void sortThis(std::vector<std::string>& list, std::vector<std::string>& list2) {

    if (list.empty() || list2.empty()) {
        std::cout << "\tEmpty list.." << std::endl;
        return;
    }
    std::sort(list.begin(), list.end());
    std::sort(list2.begin(), list2.end());
    
}
void populateVectors(std::vector<int>& vec1, std::vector<int>& vec2) {
    for (int i{ 0 }; i < 10000; i++) {
        int random = rand() % 100000 + 1;
        vec1.push_back(random);
    }
    for (int i{ 0 }; i < 10000; i++) {
        int random = rand() % 100000 + 1;
        vec2.push_back(random);
    }
}

void displayVectors(std::vector<int>& vec1, std::vector<int>& vec2) {
    for (int i{ 0 }, j{0}; j < vec2.size(), i < vec1.size(); i++, j++) {
        std::cout << "\t[Vec 1 -> INDEX: "<<i<< " VALUE: "<< vec1[i] << "]\t[Vec 2 -> INDEX: " <<j<< " VALUE: "<<vec2[j] <<"]" << std::endl;
    }
}

void populateDatabase(Movies mv, Shows sh) {
    
    
    int num{ 30000 };
    for (int i{ 0 }; i < num; i++) {
        char temp1 = (char) rand() % 26 + 1;
        char temp2 = (char) rand() % 26 + 1;
        std::string word;
        word += temp1;
        word += temp2;
        sh.addNewEntry(word, sh.getShows());
        mv.addNewEntry(word, mv.getMovies());

    }

    
}
int main() {
    srand(time(NULL));
   
    std::vector<int> vec1;
    std::vector<int> vec2;
    std::vector<std::vector<int>> vec3{ vec2, vec1 };
    //std::cout << "\n\tBefore Sorting\n";
    std::cout << "\n\tPopulating Vectors\n";
    
    std::cout << "\n\tBefore Sorting\n";


    Movies movies;
    Shows shows;
    //populateDatabase(movies, shows);
    int num{ 30000 };
    for (int i{ 0 }; i < num; i++) {
        char temp1 = (char)rand() % 26 + 1;
        char temp2 = (char)rand() % 26 + 1;
        std::string word;
        word += temp1;
        word += temp2;
        shows.addNewEntry(word, shows.getShows());
        movies.addNewEntry(word, movies.getMovies());

    }
    movies.displayAll();
    shows.displayAll();
            //Display movies and shows when empty
    /*std::cout << "\n\tBefore Adding Movies\n";
    movies.displayAll();
    std::cout << "\n\tBefore Adding Shows\n"; 
    shows.displayAll();  
    system("pause");*/

    /*system("cls");
    std::cout << "\n\tAfter Adding Movies\n";
    std::cout << std::endl;
    std::cout << std::boolalpha << movies.addNewEntry("Spider Man", movies.getMovies());
    std::cout << std::boolalpha << movies.addNewEntry("Super Man", movies.getMovies());
    std::cout << std::boolalpha << movies.addNewEntry("Enemy at the Gates", movies.getMovies());
    std::cout << std::boolalpha << movies.addNewEntry("Resident Evil", movies.getMovies());
    movies.displayAll();

    std::cout << "\n\tAfter Adding Shows\n";
    std::cout << std::boolalpha << shows.addNewEntry("El Senor de los Cielos", shows.getShows());
    std::cout << std::boolalpha << shows.addNewEntry("Senora Acero", shows.getShows());
    std::cout << std::boolalpha << shows.addNewEntry("El Chema", shows.getShows());
    std::cout << std::boolalpha << shows.addNewEntry("The Flash", shows.getShows());
    shows.displayAll();
    system("pause");
    system("cls");
    std::cout << "\n\tBefore Removing Movie\n";
    movies.removeEntry("Enemy at the Gates", movies.getMovies());

    std::cout << "\n\tBefore Removing Show\n";
    shows.removeEntry("El Chema", shows.getShows());

    movies.displayAll();
    shows.displayAll();

    system("pause");*/

    //UserInterface();
    /*MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", "root", "Rose7312!@#$%^&*", "world", 9000, NULL, 0);
    if (conn)
        std::cout << "Success";
    
    else { std::cout << "Failed!"; }*/
    
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
        **Episode: 20, 28?, 29?

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

