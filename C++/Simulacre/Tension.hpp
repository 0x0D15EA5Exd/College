#include "Capteur.hpp"
#include "Tension.hpp"
#include <iostream>
#include <random>

/*!
 *  \brief Générateur de nombres aléatoires entiers
 *
 *  Générateur de nombres aléatoires entiers uniformément distribués qui produit des nombres aléatoires non déterministes.
 */
std::random_device rdTension;

/// \fn static std::mt19937 engienRandomTension(rdTension())
/// \brief Moteur de nombres aléatoires basé sur l'algorithme Mersenne Twister.
/// \param rdTension seed
///
static std::mt19937 engineRandomTension(rdTension());


/// \fn static std::uniform_real_distribution <> disTen--- ( int, int)
/// \brief Produit des valeurs aléatoires à virgule flottante x, uniformément distribuées sur l'intervalle [a,b).
/// \param int,int
static std::uniform_real_distribution<> disTendya(30,200), distTensys(90, 180), disTenP(30, 40);


Tension::Tension() {
    std::cout << "Ctor Tension" << std::endl;
}
int Tension::GetTenP() {
    return this->TenP;;
}

int Tension::GetTendia(){
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

Tension::~Tension() noexcept { 
    std::cout << " Dtor Tensions " << std::endl;
}

