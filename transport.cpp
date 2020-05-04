#include "transport.h"
using namespace std;

   transport:: transport()
    {
        this->speed=220;
        this->number_of_packages=15;
    };
   transport:: transport(int speed, int number_of_packages)
    {
        this->speed=speed;
        this->number_of_packages=number_of_packages;
    };

  transport:: transport(transport const &transport)
{
    this->speed=transport.speed;
        this->number_of_packages=transport.number_of_packages;
}

const int& transport::getspeed() const
{
    return speed;
}
const int& transport::getnumber_of_packages() const
{
    return number_of_packages;
}


void transport::setspeed(int const& speed)
{
    this->speed=speed;
}
void transport::setnumber_of_packages(int const& number_of_packages)
{
    this->number_of_packages=number_of_packages;
}


