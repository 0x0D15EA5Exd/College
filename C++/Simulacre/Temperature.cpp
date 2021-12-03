//
//  Temperature.cpp
//  Test
//
//  Created by Victor on 03/12/2021.
//

#include "Temperature.hpp"
#include <iostream>
#include <random>

std::random_device rdTemperature;

static std::mt19937 engineRandomTemperature(rdTemperature());
static std::uniform_real_distribution<> disT(35, 40);


Temperature::Temperature() {
    std::cout << "Ctor Temperature" << std::endl;
}


bool Temperature::lireCapteur() {
    this->T = disT(engineRandomTemperature);
    return true;
}
/*
Temperature::~Temperature() noexcept {
    std::cout << "Dtor Temperature" << std::endl;
}
*/
float Temperature::GetT() {
    return this->T;
}
