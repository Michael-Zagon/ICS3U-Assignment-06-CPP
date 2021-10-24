// Copyright (c) 2021 Michael Zagon All rights reserved

// Created by: Michael Zagon
// Created on: October 2021
// This program finds the perimeter of a hexagon

#include <iostream>


int PerimeterCalculatiom(int length) {
    // This function finds the perimeter of a hexagon
    int perimeter;

    // Process
    perimeter = length * 6;

    return perimeter;
}


int main() {
    // This function gets the radius and height from the user
    std::string length_from_user;
    int length;
    int perimeter;

    // Input
    std::cout << "Enter the length of one of the hexagons sides (cm): ";
    std::cin >> length_from_user;
    std::cout << "" << std::endl;

    try {
        length = std::stoi(length_from_user);
        // Call function
        perimeter = PerimeterCalculatiom(length);
        std::cout << "The perimeter of a hexagon with the side lengths of "
            << length << " cm is " << perimeter << " cm.";
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
