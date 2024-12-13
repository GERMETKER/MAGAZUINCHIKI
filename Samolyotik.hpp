#ifndef _Samolyotik_HPP_
#define _Samolyotik_HPP_
#include "Abstact_Car.hpp"
class Samolyotik : public Abstact_Car
{
public:
    Samolyotik() = default;
    Samolyotik(const Samolyotik& other) = default;
    Samolyotik(float price, std::string name)
    {
        SetPrice(price);
        SetName(name);
    }
    ~Samolyotik() = default;
};

#endif

