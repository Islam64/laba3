#include "aeroplane.h"
#include <string>
#include <iostream>


aeroplane::aeroplane():transport()
{
    this->time="7000hours";
};
aeroplane::aeroplane(string time,int speed, int number_of_packages): transport( speed,number_of_packages)
{
    this->time=time;
};
aeroplane::aeroplane(aeroplane const& aeroplane):transport(aeroplane)
{
    this->time=aeroplane.time;
};
aeroplane& aeroplane::operator = (aeroplane const& aeroplane)
{
    this->speed=aeroplane.speed;
    this->number_of_packages=aeroplane.number_of_packages;
    this->time=aeroplane.time;
    return *this;
}
void aeroplane::settime(string const& time)
{
    this->time=time;
}
const string& aeroplane::gettime() const
{
    return time;
}
    void aeroplane:: print()const
{
    cout<<"\nCאלמכ¸ע "<<endl;
    cout<<"speed:  "<<this->speed<<endl;
    cout<<"number_of_packages:  "<<this->number_of_packages<<endl;
    cout<<"time:  "<<this->time<<endl;
};

