//
//  sante.hpp
//  Test
//
//  Created by Victor on 22/11/2021.
//

#ifndef sante_hpp
#define sante_hpp

#include <iostream>

using namespace std;

float randomGenerator(int k);

class Capteur {
    
public:
    Capteur();
    virtual bool lireCapteur() = 0;
    virtual ~Capteur();
};


class Oxygen : public Capteur {
    
public:
    Oxygen();
    ~Oxygen();
    bool lireCapteur();
    int GetOx();
    int GetPo();
    
private:
    float Ox;
    int PO;
};

class Tension : public Capteur {
    
public:
    int iDebug;
    Tension();
    ~Tension();
    bool lireCapteur();
    int GetTensys();
    int GetTendia();
    int GetTenP();
    
private:
    int Tensys;
    int Tendia;
    int TenP;
    
};

class Temperature : public Capteur {
    
public:
    Temperature();
    ~Temperature();
    bool lireCapteur();
    float GetT();
private:
    float T;
};



#endif /* sante_hpp */
