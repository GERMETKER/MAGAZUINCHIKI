#ifndef _ABSTRACT_CAR_HPP_
#define _ABSTRACT_CAR_HPP_
#include <iostream>
class Abstact_Car
{
public:
    Abstact_Car()
    {}
    Abstact_Car(float price, std::string name)
    {
        price_ = price;
        name_ = name;
    }
    Abstact_Car(const Abstact_Car& other)
    {
        price_ = other.price_;
        name_ = other.name_;
    }
    ~Abstact_Car() {}
    void SetName(std::string name)
    {
        name_ = name;
    }
    std::string GetName()
    {
        return name_;
    }
    void SetPrice(float price)
    {
        price_ = price;
    }
    float GetPrice()
    {
        return price_;
    }



protected:





private:
    std::string name_;
    float price_;
};


#endif