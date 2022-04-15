// Copyright (c) 2022 Paterry Baptichon All rights reserved.
//
// Created by: Paterry Baptichon Junior
// Created on: 2022-04-14
// This program tells the user if they are old enough to vote in an election

#include <iostream>

int main() {
    // variables
    int userAge;

    // this is where the user enters there age.
    std::string userAnswer;
    std::cout << "Enter your age here:" << std::endl;
    std::cin >> userAge;
    std::cout << "" << std::endl;

    // The process that tells the user
    // if they are old enough to vote in an election
    if (userAge >= 18) {
        std::cout << "You are old enough to vote!" << std::endl;
    } else {
          std::cout << "Sorry, you are not old enough to vote." << std::endl;
    }
    // Ask user if they want to calculate again
    std::cout << "Would you like to calculate again? Y or N\n";
    std::cin >> userAnswer;

  if (userAnswer == "Y" || "y") {
      main();
  }
}
