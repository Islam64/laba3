#ifndef AEROPLANE_H_INCLUDED
#define AEROPLANE_H_INCLUDED
#include <string>
#include "transport.h"
class aeroplane:public transport
{
protected: string time;
public:
aeroplane();

aeroplane(string time,int speed, int number_of_packages);

aeroplane(aeroplane const& aeroplane);
aeroplane& operator = (aeroplane const& aeroplane);
const string& gettime() const;
void settime(string const& time) ;
void print ()const;

};

#endif // AEROPLANE_H_INCLUDED
