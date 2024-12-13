#ifndef _ABSTRACT_MAGAZ_HPP_
#define _ABSTRACT_MAGAZ_HPP_
#include <iostream>
#include "Abstact_Car.hpp"
class Abstarct_Magaz
{
public:
    Abstarct_Magaz()
    {}
    Abstarct_Magaz(std::string name)
    {
        name_ = name;
    }
    Abstarct_Magaz(const Abstarct_Magaz& other)
    {
        name_ = other.name_;
    }
    ~Abstarct_Magaz() {}
    void SetName(std::string name)
    {
        name_ = name;
    }
    std::string GetName()
    {
        return name_;
    }



protected:

    virtual Abstact_Car* GiveCar()
    {
        Abstact_Car* ret_car = new Abstact_Car(1500, "Car");
    }




private:
    std::string name_;
};


#endif
