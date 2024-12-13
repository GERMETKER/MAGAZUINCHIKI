#ifndef _MAGAZ_Magaz_Tankov_HPP_
#define _MAGAZ_Magaz_Tankov_HPP_
#include "Abstarct_Magaz.hpp";

class Magaz_Tankov : public Abstarct_Magaz
{
public:
    Magaz_Tankov() = default;
    Magaz_Tankov(const Magaz_Tankov& other) = default;
    Magaz_Tankov(std::string name)
    {
        SetName(name);
    }
    ~Magaz_Tankov() = default;
private:

};

#endif
