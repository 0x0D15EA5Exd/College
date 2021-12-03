//
//  Tension.cpp
//  Test
//
//  Created by Victor on 03/12/2021.
//
#include "Capteur.hpp"
#include "Tension.hpp"
#include <iostream>
#include <random>
std::random_device rdTension; //Random seed generator for tension class

static std::mt19937 engineRandomTension(rdTension());
static std::uniform_real_distribution<> disTendya(30,200), distTensys(90, 180), disTenP(30, 40) ;


Tension::Tension() {
    std::cout << "Ctor Tension" << std::endl;
}
/*
Tension::~Tension() noexcept {
    std::cout << "Dtor Tension" << std::endl;
}
*/
int Tension::GetTenP() { // Getter TenP
    return this->TenP;;
}

int Tension::GetTendia(){ // Getter Tendia
    return this->Tendia;
}

int Tension::GetTensys(){
    return this->Tensys;
}

bool Tension::lireCapteur() {
    this->Tensys = (int)distTensys(engineRandomTension);
    this->Tendia = (int)disTendya(engineRandomTension);
    this->TenP = (int)disTenP(engineRandomTension);
    return true;
}
