#ifndef TRIANGOLO_H
#define TRIANGOLO_H

#include "punto.h" 

class Triangolo {
                 private :
                         Punto a; 
                         Punto b;
                         Punto c;
                 public:
                        Triangolo();
                        void set_punto_a(Punto &a);
                        void set_punto_b(Punto &b);
                        void set_punto_c(Punto &c);
                        
                        Punto get_punto_a();
                        Punto get_punto_b();
                        Punto get_punto_c();
                        };                                 
#endif
