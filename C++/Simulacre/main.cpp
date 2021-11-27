//
//  main.cpp
//  Test
//
//  Created by Victor on 27/11/2021.
//

#include <iostream>
#include "sante.hpp"


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
    
    std::cout << "Ox : " << OxygenTest.GetOx() << " & Po : " << OxygenTest.GetPo() << std::endl;
    
    
    
    std::cout << "\n\nStarting Tension sequence" << std::endl;
    
    if (TensionTest.lireCapteur())
        std::cout << "Reading sensor : DONE" << std::endl;
    else
        std::cout << "Reading sensor : ERROR" << std::endl;
    
    std::cout << "Tensys : " << TensionTest.GetTensys() << std::endl;
    std::cout << "Tendia : " << TensionTest.GetTendia() << std::endl;
    std::cout << "Tenp : " << TensionTest.GetTenP() << std::endl;
    
    
    std::cout << "\n\nStartig Temperature sequence" << std::endl;
    if (TemperatureTest.lireCapteur())
        std::cout << "Reading sensor : DONE" << std::endl;
    else
        std::cout << "Reading sensor : ERROR" << std::endl;
        
        
    std::cout << "Temperature : " << TemperatureTest.GetT() << std::endl;
    
    
    
    
    printf("Press enter");
    getchar();
    
    return 0;
}

