#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include <string>
#include "avto.h"
class car:public avto
{
public:
car();
car(string model,int speed, int number_of_packages);

car(car const& car);
car& operator = (car const& car);
 void print()const;

};


#endif // CAR_H_INCLUDED
