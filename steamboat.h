#ifndef STEAMBOAT_H_INCLUDED
#define STEAMBOAT_H_INCLUDED
#include <string>
#include "transport.h"
class steamboat:public transport
{
protected: string water;
public:
steamboat();

steamboat(int const&speed, int const&number_of_packages,string const&water);

steamboat(steamboat const& steamboat);
steamboat& operator = (steamboat const& steamboat);
void setwater(string const& water);
const string& getwater() const;
void print()const;

};

#endif // STEAMBOAT_H_INCLUDED
