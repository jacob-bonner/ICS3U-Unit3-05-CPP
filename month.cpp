// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: October 2019
// This program outputs a month in accordance with a number the user enters

#include <iostream>
#include <string>

int main() {
    // This program outputs a month in accordance with a number the user enters

    // variables
    std::string monthNumberString;
    int monthNumberInt;

    // Input
    std::cout << "Enter your month number between 1-12 (integer): "
    << std::endl;
    std::cin >> monthNumberString;
    std::cout << "" << std::endl;

    monthNumberInt = atoi(monthNumberString.c_str());

    // Process
    switch (monthNumberInt) {
        case 1 :
            std::cout << "Your month is January" << std::endl;
            break;
        case 2 :
            std::cout << "Your month is February" << std::endl;
            break;
        case 3 :
            std::cout << "Your month is March" << std::endl;
            break;
        case 4 :
            std::cout << "Your month is April" << std::endl;
            break;
        case 5 :
            std::cout << "Your month is May" << std::endl;
            break;
        case 6 :
            std::cout << "Your month is June" << std::endl;
            break;
        case 7 :
            std::cout << "Your month is July" << std::endl;
            break;
        case 8 :
            std::cout << "Your month is August" << std::endl;
            break;
        case 9 :
            std::cout << "Your month is September" << std::endl;
            break;
        case 10 :
            std::cout << "Your month is October" << std::endl;
            break;
        case 11 :
            std::cout << "Your month is November" << std::endl;
            break;
        case 12 :
            std::cout << "Your month is December" << std::endl;
            break;
        default :
            std::cout << "Invalid number";
    }
}
