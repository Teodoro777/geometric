#ifndef STRINGA_H
#define STRINGA_H

class stringa{
                     char s [1024];

              public:
                     stringa();
		     stringa(char str[]);            
                     void set_s(char str[]);
                     char* get_s();
		     int len();
                     };

#endif
