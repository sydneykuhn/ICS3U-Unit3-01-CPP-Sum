// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Sep 2020
// This program calculates the sum of two numbers
//    provided by user

#include <iostream>

int main() {
    // this function calculates sum
    int first;
    int second;
    int sum;

    // input
    std::cout << "Enter First Number (Integer): ";
    std::cin >> first;
    std::cout << "Enter Second Number (Integer): ";
    std::cin >> second;

    // process
    sum = first+second;

    // output
    std::cout << "" << std::endl;
    std::cout << "" << first << " + " "" << second
              << " = " << "" << sum << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
