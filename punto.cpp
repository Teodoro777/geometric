#include <iostream>
#include "punto.h"

using namespace std;


Punto::Punto()
{  
     cout << "Hello, world" << endl; 
}
void Punto::set_x(double xx)
{
     x = xx;
}
void Punto::set_y(double yy)
{
     y = yy;
}
double Punto::get_x()
{
              return x;
}
double Punto::get_y()
{
              return y;
}            
  
