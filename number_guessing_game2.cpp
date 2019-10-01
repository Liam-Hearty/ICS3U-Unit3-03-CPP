// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: September 2019
// This program will calculate the sum of two integers


#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int chosen_number;
    srand(time(NULL)); // seed for random number depending on time
    int mystery_number = rand() % 10;

    // input
    std::cout << "Enter your guess between 0-9: " << std::endl;
    std::cin >> chosen_number;

    // process and output
    if (chosen_number == mystery_number) {
        std::cout << "Correct!!" << std::endl;
    } else {
        std::cout << "Wrong, the number was: " << mystery_number << std::endl;
    }
}
