#ifndef PUNTO_H
#define PUNTO_H

class Punto {
     private:
              double x,y;         
               
      public:
             Punto();
             void set_x(double x);
             void set_y(double y);
             double get_x();
             double get_y();             
};

#endif
