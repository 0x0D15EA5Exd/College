//
//  Oxygene.cpp
//  Test
//
//  Created by Victor on 03/12/2021.
//

#include "Oxygene.hpp"
#include "Capteur.hpp"
#include <iostream>
#include <random>

std::random_device rdOxygene;

static std::mt19937 engineRandomOxygene(rdOxygene());
static std::uniform_real_distribution<> disOx(85, 100), disPo(30, 200);


Oxygen::Oxygen()
{
    std::cout << "Ctor Oxygen" << std::endl;
}

bool Oxygen::lireCapteur() {
    
    this->Ox = (int)disOx(engineRandomOxygene);
    this->PO = (int)disPo(engineRandomOxygene);
    
    
    return true;
}

int Oxygen::GetPo() { //Getter Po
    return this->PO;
}

int Oxygen::GetOx(){ //Getter Ox
    return  this->Ox;
}
/*
Oxygen::~Oxygen() noexcept {
    std::cout << "Dtor Oxygen" << std::endl;
}
*/
