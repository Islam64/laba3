#include <iostream>
#include <string>
#include "transport.h"
#include "avto.h"
#include "car.h"
#include "aeroplane.h"
#include "bus.h"
#include "steamboat.h"
using namespace std;


int main()
{
setlocale(LC_ALL,"RUS");
aeroplane boing736("3000hours",600,25);
boing736.print();

car  mb("x4",120,50);
car audi;

audi.setmodel("a4");
audi.setspeed(10);
audi.setnumber_of_packages(2000);
cout<<"\nget/set Машина  "<<endl;
cout<<"getmodel:  "<<audi.getmodel()<<endl;
cout<<"getspeed:  "<<audi.getspeed()<<endl;
cout<<"getgetnumber_of_packages:  "<<audi.getnumber_of_packages()<<endl;

mb.print();

bus volvo(90,60);
volvo.print();

steamboat laguna(15,700,"400cube");
laguna.print();
steamboat tree;
tree.print();
tree = laguna;
tree.print();
return 0;
}
