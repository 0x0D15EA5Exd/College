//
//  Oxygene.hpp
//  Test
//
//  Created by Victor on 03/12/2021.
//

#ifndef Oxygene_hpp
#define Oxygene_hpp


#include "Capteur.hpp"

class Oxygen : public Capteur {
    
public:
    Oxygen();
    //~Oxygen();
    bool lireCapteur();
    int GetOx();
    int GetPo();
    
private:
    float Ox;
    int PO;
};




#endif /* Oxygene_hpp */
