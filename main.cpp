#include <iostream>
#include "func.h"

int main() {
    point sc_start, sc_finish;
    std::cout << "Input the starting point of the cut (x, y): ";
    std::cin >> sc_start.x >> sc_start.y;
    std::cout << "Input the finishing point of the cut (x, y): ";
    std::cin >> sc_finish.x >> sc_finish.y;

    scalpel(sc_start, sc_finish);
    std::string action;
    while (action != "suture") {
        std::cout << "Input next action (hemostat, tweezers, suture): ";
        std::cin >> action;
        if (action == "hemostat") hemostat();
        else if (action == "tweezers") tweezers();
        else if (action != "suture") std::cout << "Wrong input. Try again." << std::endl;
    }

    point str_start, str_finish;
    std::cout << "Input the starting and finishing points of the suture (x, y): ";
    std::cin >> str_start.x >> str_start.y >> str_finish.x >> str_finish.y;
    while (!operation_end(sc_start, sc_finish, str_start, str_finish)) {
        std::cout << "The coordinates of the suture do not coincide with the coordinates of the cut." << std::endl <<
                     "Input the starting and finishing points of the suture (x, y): ";
        std::cin >> str_start.x >> str_start.y >> str_finish.x >> str_finish.y;
    }
    suture(str_start, str_finish);
    return 0;
}
