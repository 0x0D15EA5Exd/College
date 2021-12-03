//
//  Tension.hpp
//  Test
//
//  Created by Victor on 03/12/2021.
//

#ifndef Tension_hpp
#define Tension_hpp

class Tension : public Capteur {
    
public:
    int iDebug;
    Tension();
  //  ~Tension();
    bool lireCapteur();
    int GetTensys();
    int GetTendia();
    int GetTenP();
    
private:
    int Tensys;
    int Tendia;
    int TenP;
    
};

#endif /* Tension_hpp */
