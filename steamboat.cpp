#include "steamboat.h"
#include <string>
#include <iostream>

steamboat::steamboat():transport()
{ this->water="700cube";
};
steamboat::steamboat(int const&speed, int const&number_of_packages,string const&water): transport( speed,number_of_packages)
{
    this->water=water;
};
steamboat::steamboat(steamboat const& steamboat):transport(steamboat)
{ this->water=steamboat.water;
};
steamboat& steamboat::operator = (steamboat const& steamboat)
{
    this->speed=steamboat.speed;
    this->number_of_packages=steamboat.number_of_packages;
    this->water=steamboat.water;
    return *this;
}
void steamboat::setwater(string const& water)
{
    this->water=water;
}
const string& steamboat::getwater() const
{
    return water;
}
    void steamboat:: print() const
{
    cout<<"\nПароход "<<endl;
    cout<<"speed:  "<<this->speed<<endl;
    cout<<"number_of_packages:  "<<this->number_of_packages<<endl;
    cout<<"water:  "<<this->water<<endl;
};

