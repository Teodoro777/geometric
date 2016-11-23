#include <iostream>
#include "triangolo.h"

using namespace std;

Triangolo::Triangolo()

{
                      cout << " E' nato il triangolo " << endl;
                      a.set_x(0.0);
                      a.set_y(0.0);
                      b.set_x(0.0);
                      b.set_y(0.0);
                      c.set_x(0.0);
                      c.set_y(0.0);
               
}                        
                             
void Triangolo::set_punto_a(Punto &aa)
{
     a.set_x(aa.get_x());
     a.set_y(aa.get_y());
}      
void Triangolo::set_punto_b(Punto &bb)
{
     b.set_x(bb.get_x());
     b.set_y(bb.get_y());
}     
void Triangolo::set_punto_c(Punto &cc)
{
     c.set_x(cc.get_x());
     c.set_y(cc.get_y());
}                       
Punto Triangolo::get_punto_a()
{
      return a;
}
Punto Triangolo::get_punto_b()
{
      return b;
}
Punto Triangolo::get_punto_c()
{
      return c;
}
                        
