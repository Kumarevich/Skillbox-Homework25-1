#pragma once
#include "point_coordinates.h"
#include <iostream>

void scalpel(point start, point finish) {
    std::cout << "An incision is made from point A (" << start.x << ", " << start.y <<
                ") to point B (" << finish.x << ", " << finish.y << ")." << std::endl;
}

void hemostat() {
    std::cout << "Input the point (x, y): ";
    point h_point;
    std::cin >> h_point.x >> h_point.y;
    std::cout << "Hemostat is given up on point (" << h_point.x << ", " << h_point.y << ")." << std::endl;
}

void tweezers() {
    std::cout << "Input the point (x, y): ";
    point t_point;
    std::cin >> t_point.x >> t_point.y;
    std::cout << "Tweezers applied at the point (" << t_point.x << ", " << t_point.y << ")." << std::endl;
}

void suture(point start, point finish) {
    std::cout << "The suture is applied from point A (" << start.x << ", " << start.y <<
                ") to point B (" << finish.x << ", " << finish.y << ").";
}

bool operation_end (point sc_start, point sc_finish, point str_start, point str_finish) {
    if (sc_start.x == str_start.x && sc_start.y == str_start.y && sc_finish.x == str_finish.x && sc_finish.y == str_finish.y) return true;
    return false;
}