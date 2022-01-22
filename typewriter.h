#ifndef __TypeWriter__
#define __TypeWriter__
#include <iostream>
#include <Windows.h>
namespace typewriter {
    template<typename T>
    void print(T& message, int time) {
        std::string typeMessage = message;
        int count = 0;
        while (typeMessage[count] != NULL) {
            std::cout << typeMessage[count];
            Sleep(time);
            count++;
        } //end while loop
    } //end TypeWriter()
}
#endif