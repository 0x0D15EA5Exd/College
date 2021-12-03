//
//  Temperature.hpp
//  Test
//
//  Created by Victor on 03/12/2021.
//

#ifndef Temperature_hpp
#define Temperature_hpp

#include "Capteur.hpp"


class Temperature : public Capteur {
    
public:
    Temperature();
   // ~Temperature();
    bool lireCapteur();
    float GetT();
private:
    float T;
};


#endif /* Temperature_hpp */
