//
//  Capteur.hpp
//  Test
//
//  Created by Victor on 03/12/2021.
//

#ifndef Capteur_hpp
#define Capteur_hpp

#include <random>




class Capteur {
    
public:
    Capteur();
    virtual bool lireCapteur() = 0;
    //~Capteur();
};


#endif /* Capteur_hpp */
