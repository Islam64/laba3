#ifndef AVTO_H_INCLUDED
#define AVTO_H_INCLUDED
#include <string>
#include "transport.h"
using namespace std;
class avto: public transport
{
    protected: string model;
public:
avto();

avto(string model,int speed, int number_of_packages);

 avto(avto const &avto);





const string& getmodel() const;




void setmodel(string const& model);

virtual void print()const =0;


};

#endif // AVTO_H_INCLUDED
