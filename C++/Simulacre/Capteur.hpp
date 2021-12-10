#ifndef Capteur_hpp
#define Capteur_hpp
/*!
 * \file Capteur.hpp
 * \author 0xdeadc0de
 * \version 1.0-stable-release
 */

#include <random>

/*!
 *  \class Capteur.
 *  \brief Classe abstraite.
 *
 *  Classe mère, contenant des méthodes virtuelles pures.
 *
 */
class Capteur {
    
public:
    /*!
     * \brief Constructeur
     *  Constructeur de la classe Capteur.
     */
    Capteur();
    /*!
     *  \brief Methode virtuelle pure
     *
     *
     */
    virtual bool lireCapteur() = 0;
    /*!
     *  \brief Destructeur
     *
     *  Destrcuteur de la classe Capteur.
     */
    virtual ~Capteur() = 0;
};


#endif /* Capteur_hpp */
