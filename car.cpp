#include "car.h"
#include <string>
#include <iostream>
car::car():avto(){};
car::car(string model,int speed, int number_of_packages):avto( model, speed,number_of_packages)
{};
car::car(car const& car):avto(car){};
car& car::operator = (car const& car)
{
    this->speed=car.speed;
    this->number_of_packages=car.number_of_packages;
    this->model=car.model;
    return *this;
}
  void car::print()const
{
    cout<<"\nМашина "<<endl;
    cout<<"speed:  "<<this->speed<<endl;
    cout<<"number_of_packages:  "<<this->number_of_packages<<endl;
    cout<<"model:  "<<this->model<<endl;
}
