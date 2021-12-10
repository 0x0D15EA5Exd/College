#ifndef Oxygene_hpp
#define Oxygene_hpp


/*!
 * \file Capteur.h++
 * \author 0xdeadc0de
 * \version 1.0-stable-release
 */

#include "Capteur.hpp"
/*! \class Oxygene
 *  \brief Classe Oxygene, herite de Capteur.
 *
 *  La classe gere les différentes constantes en rapport avec l'oxygene, ainsi que les relevés.
 */
class Oxygen : public Capteur {
    
public:
    /*!
     * \brief Constructeur
     *  Constructeur de la classe Oxygene
     */
    Oxygen();
    /*!
     *  \brief Destructeur
     *
     *  Destrcuteur de la classe Oxygene
     */
    ~Oxygen();
    
    /*!
     *  \brief Lecture des valeurs
     *  Methode qui permete de lire les constantes de à la classe Oxygene.
     *  \return True si les valeurs sont lu sans rencontrer de problèmes, false sinon.
     */
    bool lireCapteur();
    
    /*!
     *  \brief Acceseur vers Ox
     *  \return Un reel, la valeur contenue dans Ox.
     */
    
    
    float GetOx();
    /*!
     *  \brief Accesseur vers Po.
     *  \return Un entier, la valeur de Po.
     */
    int GetPo();
    
private:
    float Ox; /*!< Valeur oxygene*/
    int PO; /*!< Valeur pouls*/
};




#endif /* Oxygene_hpp */
