//
//  main.cpp
//  Test
//
//  Created by Victor on 27/11/2021.
//

#include <iostream>
#include "Capteur.hpp"
#include "Oxygene.hpp"
#include "Temperature.hpp"
#include "Tension.hpp"
#include <iomanip>

int main()
{
    // TEST PROTOCOL
    //Capteur Test; Abstract Class
    
    //
    Oxygen OxygenTest;
    Tension TensionTest;
    Temperature TemperatureTest;
    
    
    // Oxygen ----
    
    std::cout << "\n\nStarting Oxygen sequence" << std::endl;
    
    if(OxygenTest.lireCapteur())
        std::cout << "Reading sensor : DONE" << std::endl;
    else
        std::cout << "Reading sensor : ERROR" << std::endl;
    
    std::cout << "Ox : " << OxygenTest.GetOx() << "% & Pouls : " << OxygenTest.GetPo() << std::endl;
    
    
    
    std::cout << "\n\nStarting Tension sequence" << std::endl;
    
    if (TensionTest.lireCapteur())
        std::cout << "Reading sensor : DONE" << std::endl;
    else
        std::cout << "Reading sensor : ERROR" << std::endl;
    
    std::cout << "Tensys : " << TensionTest.GetTensys() << std::endl;
    std::cout << "Tendia : " << TensionTest.GetTendia() << std::endl;
    std::cout << "Tenp : " << TensionTest.GetTenP() << " P/min" << std::endl;
    
    
    std::cout << "\n\nStartig Temperature sequence" << std::endl;
    if (TemperatureTest.lireCapteur())
        std::cout << "Reading sensor : DONE" << std::endl;
    else
        std::cout << "Reading sensor : ERROR" << std::endl;
        
        
    std::cout << std::setprecision(2) << std::fixed << "Temperature : " << TemperatureTest.GetT() << "°C" << std::endl;
    // Sets the floatfield format flag for the str stream to fixed.
    // the value is represented with exactly as many digits in the decimal part as specified by the precision field (precision) and with no exponent part.
    
    
    
    printf("Press enter");
    getchar();
    
    return 0;
}

