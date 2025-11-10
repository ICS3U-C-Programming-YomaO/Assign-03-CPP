// Copyright (c) 2025 Yoma Ozoh All rights reserved
//
// Created By : Yoma Ozoh
// Date : November, 2025
// This program checks if package can be accepter or not
// Copyright (c) 2025 Yoma Ozoh All rights reserved.
//
// Created by: Yoma Ozoh
// Date: November 2025
// This program checks if a package can be shipped

#include <iostream>
#include <string>

int main() {
    // declare variables
    std::string weightAsString;
    std::string lengthAsString;
    std::string widthAsString;
    std::string heightAsString;
    int weight;
    int length;
    int width;
    int height;
    int volume;
    std::string userAnswer;

    try {
        // welcome message
        std::cout << "Welcome to the Package Check Program!" << std::endl;

        // get inputs
        std::cout << "Enter weight (kg): ";
        std::cin >> weightAsString;
        weight = std::stod(weightAsString);

        std::cout << "Enter length (cm): ";
        std::cin >> lengthAsString;
        length = std::stod(lengthAsString);

        std::cout << "Enter width (cm): ";
        std::cin >> widthAsString;
        width = std::stod(widthAsString);

        std::cout << "Enter height (cm): ";
        std::cin >> heightAsString;
        height = std::stod(heightAsString);

        // calculate volume
        volume = length * width * height;

        // check positive numbers
        if (weight > 0 && length > 0 && width > 0 && height > 0) {
            // nested ifs for conditions
            if (weight <= 27) {
                if (volume <= 10000) {
                    std::cout << "Your package is valid for shipping!"
                              << std::endl;
                } else {
                    std::cout << "Sorry, the volume is too large to ship."
                              << std::endl;
                }
            } else {
                std::cout << "Sorry, this package is too heavy to ship."
                          << std::endl;
            }
        } else {
            std::cout << "Invalid input. Enter positive numbers only."
                      << std::endl;
        }

        // ask user if they want to check another package
        std::cout << "Do you want to check another package? (yes or no): ";
        std::cin >> userAnswer;

        if (userAnswer == "yes") {
            std::cout << "Okay! Restart the program to check another package."
                      << std::endl;
        } else {
            if (userAnswer == "no") {
                std::cout << "Okay! Have a great day!" << std::endl;
            } else {
                std::cout << "Invalid answer. Please type yes or no."
                          << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "ERROR! Enter a valid input!" << std::endl;
    }

    std::cout << "Thanks for using the Package Check Program!" << std::endl;
}
