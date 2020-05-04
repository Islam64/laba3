#ifndef BUS_H_INCLUDED
#define BUS_H_INCLUDED
#include <string>
#include "transport.h"

class bus: public transport
{
public:
    bus(int speed, int number_of_packages);
bus();
bus(bus const& bus);
bus& operator = (bus const& bus);

 void print() const;

};

#endif // BUS_H_INCLUDED
