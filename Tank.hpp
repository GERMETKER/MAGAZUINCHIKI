#ifndef _Tank_HPP_
#define _Tank_HPP_
#include "Abstact_Car.hpp"
class Tank : public Abstact_Car
{
public:
    Tank() = default;
    Tank(const Tank& other) = default;
    Tank(float price, std::string name)
    {
        SetPrice(price);
        SetName(name);
    }
    ~Tank() = default;
};

#endif

