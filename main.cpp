#include <iostream>
#include "punto.h"
#include "triangolo.h"
#include "stringa.h"

using namespace std;

int main()
{   
    int condizione; 
    Punto p;
    Triangolo t;
    stringa str;

    cout << "***" << endl;
    
    p.set_x(2.3);
    p.set_y(5.8);
    cout << "x: "<< p.get_x()<<"y: "<< p.get_y() <<endl;


    str.set_s([ciao]);
    cout <<  "Se vuoi modificare la stringa digita 1 altrimenti qualunque tasto" << endl;	
    cin >> condizione;
    if (condizione==1)
	{	
		cout << "digita il testo che vuoi visualizzare e saprai da quante lettere e' composto" ; 
}; 
   return 0;
    
}

