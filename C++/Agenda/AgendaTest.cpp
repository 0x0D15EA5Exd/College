// AgenaTest.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
#include "Agenda.h"
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <string>

using namespace std;

void so()
{
	cout << R"(                                                                                                                                                                                                                       
                                                            dddddddd                                                                                                                                                   
MMMMMMMM               MMMMMMMM                             d::::::d                         BBBBBBBBBBBBBBBBB                                                                                                         
M:::::::M             M:::::::M                             d::::::d                         B::::::::::::::::B                                                                                                        
M::::::::M           M::::::::M                             d::::::d                         B::::::BBBBBB:::::B                                                                                                       
M:::::::::M         M:::::::::M                             d:::::d                          BB:::::B     B:::::B                                                                                                      
M::::::::::M       M::::::::::M  aaaaaaaaaaaaa      ddddddddd:::::d     eeeeeeeeeeee           B::::B     B:::::Byyyyyyy           yyyyyyy                                                                             
M:::::::::::M     M:::::::::::M  a::::::::::::a   dd::::::::::::::d   ee::::::::::::ee         B::::B     B:::::B y:::::y         y:::::y                                                                              
M:::::::M::::M   M::::M:::::::M  aaaaaaaaa:::::a d::::::::::::::::d  e::::::eeeee:::::ee       B::::BBBBBB:::::B   y:::::y       y:::::y                                                                               
M::::::M M::::M M::::M M::::::M           a::::ad:::::::ddddd:::::d e::::::e     e:::::e       B:::::::::::::BB     y:::::y     y:::::y                                                                                
M::::::M  M::::M::::M  M::::::M    aaaaaaa:::::ad::::::d    d:::::d e:::::::eeeee::::::e       B::::BBBBBB:::::B     y:::::y   y:::::y                                                                                 
M::::::M   M:::::::M   M::::::M  aa::::::::::::ad:::::d     d:::::d e:::::::::::::::::e        B::::B     B:::::B     y:::::y y:::::y                                                                                  
M::::::M    M:::::M    M::::::M a::::aaaa::::::ad:::::d     d:::::d e::::::eeeeeeeeeee         B::::B     B:::::B      y:::::y:::::y                                                                                   
M::::::M     MMMMM     M::::::Ma::::a    a:::::ad:::::d     d:::::d e:::::::e                  B::::B     B:::::B       y:::::::::y                                                                                    
M::::::M               M::::::Ma::::a    a:::::ad::::::ddddd::::::dde::::::::e               BB:::::BBBBBB::::::B        y:::::::y                                                                                     
M::::::M               M::::::Ma:::::aaaa::::::a d:::::::::::::::::d e::::::::eeeeeeee       B:::::::::::::::::B          y:::::y                                                                                      
M::::::M               M::::::M a::::::::::aa:::a d:::::::::ddd::::d  ee:::::::::::::e       B::::::::::::::::B          y:::::y                                                                                       
MMMMMMMM               MMMMMMMM  aaaaaaaaaa  aaaa  ddddddddd   ddddd    eeeeeeeeeeeeee       BBBBBBBBBBBBBBBBB          y:::::y                                                                                        
                                                                                                                       y:::::y                                                                                         
                                                                                                                      y:::::y                                                                                          
                                                                                                                     y:::::y                                                                                           
                                                                                                                    y:::::y                                                                                            
                                                                                                                   yyyyyyy                                                                                             
                                                                                                                                                                                                                       
                                                                                                                                                                                                                       
                                                                                                                                                                                                                       
                                                                                                                                                                                                                       
     000000000                         DDDDDDDDDDDDD      EEEEEEEEEEEEEEEEEEEEEE               AAA               DDDDDDDDDDDDD                CCCCCCCCCCCCC     000000000     DDDDDDDDDDDDD      EEEEEEEEEEEEEEEEEEEEEE
   00:::::::::00                       D::::::::::::DDD   E::::::::::::::::::::E              A:::A              D::::::::::::DDD          CCC::::::::::::C   00:::::::::00   D::::::::::::DDD   E::::::::::::::::::::E
 00:::::::::::::00                     D:::::::::::::::DD E::::::::::::::::::::E             A:::::A             D:::::::::::::::DD      CC:::::::::::::::C 00:::::::::::::00 D:::::::::::::::DD E::::::::::::::::::::E
0:::::::000:::::::0                    DDD:::::DDDDD:::::DEE::::::EEEEEEEEE::::E            A:::::::A            DDD:::::DDDDD:::::D    C:::::CCCCCCCC::::C0:::::::000:::::::0DDD:::::DDDDD:::::DEE::::::EEEEEEEEE::::E
0::::::0   0::::::0xxxxxxx      xxxxxxx  D:::::D    D:::::D E:::::E       EEEEEE           A:::::::::A             D:::::D    D:::::D  C:::::C       CCCCCC0::::::0   0::::::0  D:::::D    D:::::D E:::::E       EEEEEE
0:::::0     0:::::0 x:::::x    x:::::x   D:::::D     D:::::DE:::::E                       A:::::A:::::A            D:::::D     D:::::DC:::::C              0:::::0     0:::::0  D:::::D     D:::::DE:::::E             
0:::::0     0:::::0  x:::::x  x:::::x    D:::::D     D:::::DE::::::EEEEEEEEEE            A:::::A A:::::A           D:::::D     D:::::DC:::::C              0:::::0     0:::::0  D:::::D     D:::::DE::::::EEEEEEEEEE   
0:::::0 000 0:::::0   x:::::xx:::::x     D:::::D     D:::::DE:::::::::::::::E           A:::::A   A:::::A          D:::::D     D:::::DC:::::C              0:::::0 000 0:::::0  D:::::D     D:::::DE:::::::::::::::E   
0:::::0 000 0:::::0    x::::::::::x      D:::::D     D:::::DE:::::::::::::::E          A:::::A     A:::::A         D:::::D     D:::::DC:::::C              0:::::0 000 0:::::0  D:::::D     D:::::DE:::::::::::::::E   
0:::::0     0:::::0     x::::::::x       D:::::D     D:::::DE::::::EEEEEEEEEE         A:::::AAAAAAAAA:::::A        D:::::D     D:::::DC:::::C              0:::::0     0:::::0  D:::::D     D:::::DE::::::EEEEEEEEEE   
0:::::0     0:::::0     x::::::::x       D:::::D     D:::::DE:::::E                  A:::::::::::::::::::::A       D:::::D     D:::::DC:::::C              0:::::0     0:::::0  D:::::D     D:::::DE:::::E             
0::::::0   0::::::0    x::::::::::x      D:::::D    D:::::D E:::::E       EEEEEE    A:::::AAAAAAAAAAAAA:::::A      D:::::D    D:::::D  C:::::C       CCCCCC0::::::0   0::::::0  D:::::D    D:::::D E:::::E       EEEEEE
0:::::::000:::::::0   x:::::xx:::::x   DDD:::::DDDDD:::::DEE::::::EEEEEEEE:::::E   A:::::A             A:::::A   DDD:::::DDDDD:::::D    C:::::CCCCCCCC::::C0:::::::000:::::::0DDD:::::DDDDD:::::DEE::::::EEEEEEEE:::::E
 00:::::::::::::00   x:::::x  x:::::x  D:::::::::::::::DD E::::::::::::::::::::E  A:::::A               A:::::A  D:::::::::::::::DD      CC:::::::::::::::C 00:::::::::::::00 D:::::::::::::::DD E::::::::::::::::::::E
   00:::::::::00    x:::::x    x:::::x D::::::::::::DDD   E::::::::::::::::::::E A:::::A                 A:::::A D::::::::::::DDD          CCC::::::::::::C   00:::::::::00   D::::::::::::DDD   E::::::::::::::::::::E
     000000000     xxxxxxx      xxxxxxxDDDDDDDDDDDDD      EEEEEEEEEEEEEEEEEEEEEEAAAAAAA                   AAAAAAADDDDDDDDDDDDD                CCCCCCCCCCCCC     000000000     DDDDDDDDDDDDD      EEEEEEEEEEEEEEEEEEEEEE
                                                                                                                                                                                                                       
         

Copyright [2021] [0xDEADC0DE aka Victor]

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License                                                                                                                                                                                                             
 )" << endl;
}



int main()
{
	so();
	string buffer;
	const char ta[5] = "exit";
	//Agenda arrayOfAgenda[50];
	//vector<Agenda> m_VectorOfAgenda;

	//cout << "Combien d'agenda a creer : ";
	//cin >> t;

	//m_VectorOfAgenda.assign(t, Agenda());
	
	//cout << " On va iterer a travers le tableau d'agenda dans un orde croissant 0->50" << endl;
	Agenda Agenda;
	
	do
	{
		cout << "Aide disponible avec la commande 'help' ";
		cout << "Que voulez-vous faire ?  " << endl;

		cin.clear();
		getline(cin, buffer);

		if (buffer == "help")
		{
			cout << "New agenda : Pour créer un nouvel agenda" << endl << "Add Event : Ajouter un nouvel évenement dans l'agenda" << endl << "Del Event : Pour suprimer un évenement de l'agenda" << endl << "afficher : afficher tous les évenements" << endl;
		}
		else if (buffer == "New Agenda")
		{
			cout << "Nom de l'agenda : ";
			getline(cin, buffer);
			Agenda.setAgendaName(buffer);
			buffer.clear();
			getline(cin, buffer);
			cout << Agenda.getAgendaName();
			Agenda.setAgendaDesc(buffer);

			cout << "Nom : " << Agenda.getAgendaName() << endl;
			cout << "Desc : " << Agenda.getAgendaDesc() << endl;

		}
		else if (buffer == "Add Event")
		{
			Agenda += Agenda;
		}
		else if (buffer == "Del Event")
		{
			Agenda -= Agenda;
		}
		else if (buffer == "print")
		{
			cout << Agenda;
		}

		cout << flush;
	} while (buffer != "exit");
	return 0xDEADC0DE;
}








void help()
{
	// Create pour créer un agenda New Agenda  Add Event Del Event
	/// afficher les event string if New
};

