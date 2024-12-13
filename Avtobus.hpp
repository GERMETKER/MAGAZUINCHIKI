#ifndef _Avtobus_HPP_
#define _Avtobus_HPP_
#include "Abstact_Car.hpp"
class Avtobus : public Abstact_Car
{
public:
    Avtobus() = default;
    Avtobus(const Avtobus& other) = default;
    Avtobus(float price, std::string name)
    {
        SetPrice(price);
        SetName(name);
    }
    ~Avtobus() = default;
};

#endif