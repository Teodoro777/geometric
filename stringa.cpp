#include <iostream>
#include "stringa.h"

using namespace std;

stringa::stringa()
{
                  cout << "E' nata la stringa"<<endl;
                  s[0]='\0';
}

stringa::stringa(char str[])
{
	set_s(str);
}

void stringa::set_s(char str[])      
{
	int i=0;
	while(str[i]!='\0')
		{s[i]=str[i];
			i++;} 
        s[i]='\0';
}

char* stringa::get_s()
{
	return s;
	
} 

int stringa::len()
{
	int i=0;
	while(s[i]!='0')
		{ i++; }
    	return i;
}
