#ifndef _MAGAZ_AVTOBUSOV_HPP_
#define _MAGAZ_AVTOBUSOV_HPP_
#include "Abstarct_Magaz.hpp";
#include "Avtobus.hpp"
class Magaz_Avtobusov : public Abstarct_Magaz
{
public:
    Magaz_Avtobusov() = default;
    Magaz_Avtobusov(const Magaz_Avtobusov& other) = default;
    Magaz_Avtobusov(std::string name)
    {
        SetName(name);
    }
    ~Magaz_Avtobusov() = default;

    Avtobus* GiveCar()override
    {
        Avtobus* ret_car = new Avtobus(5000, "Avtobus");
    }
private:

};

#endif