// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Oct 2019
// This program uses return values

#include <iostream>
#include <string>
#include <cmath>

float CalculateVolume(int radius, int height) {
    // calculate volume
    float volume;
    volume = (M_PI*(pow(radius, 2))*height);


    return volume;
}


main() {
    // this function gets grade
    float volume;
    int radiusInt;
    int heightInt;
    std::string radius;
    std::string height;
    std::string calculateVolume;

    // input
    std::cout << "Enter radius(cm): ";
    std::cin >> radius;
    std::cout << "Enter height(cm): ";
    std::cin >> height;
    std::cout << std::endl;
    try {
        radiusInt = std::stoi(radius);
        heightInt = std::stoi(height);
        // call functions
        volume = CalculateVolume(radiusInt, heightInt);
        // output
        std::cout << "Your volume is " << volume << "cm^3" << std::endl;
    } catch(...) {
        std::cout << "invalid integer" << std::endl;
    }
}
