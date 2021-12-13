/*!
 * \file Tension.h++
 * \author 0xdeadc0de
 * \version 1.0-stable-release
 */

#ifndef Tension_hpp
#define Tension_hpp
/*!
 *  \class Tension.
 *  \brief Classe Tension, herite de capteur.
 *
 *  La classe gere les différentes constantes en rapport avec la tension.
 *
 */
class Tension : public Capteur {
    
public:
    int iDebug;
    /*!
     * \brief Constructeur
     *  Constructeur de la classe Tension
     */
    Tension();
    /*!
     *  \brief Destructeur
     *
     *  Destrcuteur de la classe Tension
     */
    virtual ~Tension();
    /*!
     *  \brief Lecture des valeurs
     *  Methode qui permete de lire les constantes de à la classe Tension.
     *  \return True si les valeurs sont lu sans rencontrer de problèmes, false sinon.
     */
    bool lireCapteur();
    /*!
     *  \brief Acceseur vers Tensys.
     *  \return Un reel, la valeur contenue dans Tensys.
     */
    int GetTensys();
    /*!
     *  \brief Acceseur vers Tendia.
     *  \return Un reel, la valeur contenue dans Tendia.
     */
    int GetTendia();
    /*!
     *  \brief Acceseur vers Tendia.
     *  \return Un reel, la valeur contenue dans TenP.
     */
    int GetTenP();
    
private:
    int Tensys; /*!< Valeur Tensys*/
    int Tendia; /*!< Valeur Tendia*/
    int TenP;/*!< Valeur TenP*/
    
};

#endif /* Tension_hpp */
