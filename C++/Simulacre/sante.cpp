//
//  sante.cpp
//  Test
//
//  Created by Victor on 22/11/2021.
//
#include "sante.hpp"
#include <iostream>
#include <random>


std::random_device rd; // Random Seed generator 
static std::mt19937 engineRandom(rd()); //Standard mersenne_twister_engine seeded with rd()
static std::uniform_real_distribution<> disOx(85, 100), disPo(30, 200), distTensys(90, 180), disTendya(30, 200), disTenP(30, 40), disT(35, 40);

Capteur::Capteur() { 
    std::cout << "Ctor Capteur" << std::endl;
}

Capteur::~Capteur() noexcept(true) {
    std::cout << "Dtor Capteur" << std::endl;
}


// --------------------------------
Oxygen::Oxygen()
{
    std::cout << "Ctor Oxygen" << std::endl;
}

bool Oxygen::lireCapteur() {
    
    this->Ox = (int)disOx(engineRandom);
    this->PO = (int)disPo(engineRandom);
    
    
    return true;
}

int Oxygen::GetPo() { //Getter Po
    return this->PO;
}

int Oxygen::GetOx(){ //Getter Ox
    return  this->Ox;
}

Oxygen::~Oxygen() noexcept { 
    std::cout << "Dtor Oxygen" << std::endl;
}


// ----------------------------------
Tension::Tension() {
    std::cout << "Ctor Tension" << std::endl;
}

Tension::~Tension() noexcept {
    std::cout << "Dtor Tension" << std::endl;
}

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
    this->Tensys = (int)distTensys(engineRandom);
    this->Tendia = (int)disTendya(engineRandom);
    this->TenP = (int)disTenP(engineRandom);
    return true;
}


//------------------------------------

Temperature::Temperature() {
    std::cout << "Ctor Temperature" << std::endl;
}


bool Temperature::lireCapteur() {
    this->T = disT(engineRandom);
    return true;
}

Temperature::~Temperature() noexcept { 
    std::cout << "Dtor Temperature" << std::endl;
}

float Temperature::GetT() { 
    return this->T;
}


