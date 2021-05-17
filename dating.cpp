// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan Kene
// Created on: May 17 2021
// This program allows the user enters their age
// and then the program tells the user if they can date the
// grandparent's grandchild or not based on their age.

#include <iostream>
#include <random>

int main() {
    int userAgeAsInt;
    std::string userAgeAsString;

    // get the user's age
    std::cout << "Enter your age: ";
    // get the age from the user as a string
    std::cin >> userAgeAsString;
    std::cout << " " << std::endl;


try {
    // convert the user's age to an int
    userAgeAsInt = std::stoi(userAgeAsString);
    // check if the age is above 20 and below 40
    if (userAgeAsInt > 20 && userAgeAsInt < 40) {
        std::cout << "You can date the grandchild";
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << "Thanks for playing" << std::endl;
    } else if (userAgeAsInt < 20)  {
        std::cout << "You cannot date the grandchild; you are too young.\n";
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << "Thanks for playing" << std::endl;
    } else if (userAgeAsInt > 40) {
        std::cout << "You cannot date the grandchild; you are too old";
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << "Thanks for playing" << std::endl;
    }
} catch (std::invalid_argument) {
    // The user did not enter an integer.
    std::cout << userAgeAsString << " is not an integer.\n";
    std::cout << "Thanks for playing" << std::endl;
}
    
}

