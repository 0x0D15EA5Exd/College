/*!
 * \file Temperature.h++
 * \author 0xdeadc0de
 * \version 1.0-stable-release
 */

#ifndef Temperature_hpp
#define Temperature_hpp

#include "Capteur.hpp"

/*! \class Temperature
 *  \brief Classe Temperature, herite de Capteur.
 *
 *  La classe gere les différentes constantes en rapport avec l'oxygene, ainsi que les relevés.
 */
class Temperature : public Capteur {
    
public:
    /*!
     * \brief Constructeur
     *  Constructeur de la classe Temperature
     */
    Temperature();
    /*!
     *  \brief Destructeur
     *
     *  Destrcuteur de la classe Temperature
     */
    ~Temperature();
    
    /*!
     *  \brief Lecture des valeurs
     *  Methode qui permete de lire les constantes de à la classe Temperature.
     *  \return True si les valeurs sont lu sans rencontrer de problèmes, false sinon.
     */
    bool lireCapteur();
    /*!
     *  \brief Accesseur vers t.
     *  \return Un reel, la valeur de T..
     */
    float GetT();
private:
    float T; /*!< Valeur  T*/
};


#endif /* Temperature_hpp */
