// Copyright (c) 2025 Christopher El-Mur All rights reserved
// Created by Christopher El-Mur
// Date:Oct 64 2025
// This program asks the user for a random number between 1-9
// and tells them if it is correct of incorrect

#include <iostream>
int main() {
    // define the constants CORRECT_NUMBER
    const int CORRECT_NUMBER = 9;
    int numberGuess;

    // ask the user for their guess
    std::cout << "Enter your guess:";
    std::cin >> numberGuess;
    std::cout << "" << std::endl;

    // tell the user if their guess is correct or incorrect
    if (numberGuess != CORRECT_NUMBER) {
        // display "Guess again"
        std::cout << "Guess again";
    }
    if (numberGuess == CORRECT_NUMBER) {
        // display CORRECT
        std::cout << "CORRECT!";
    }
}
