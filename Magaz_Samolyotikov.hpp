#ifndef _MAGAZ_Magaz_Samolyotikov_HPP_
#define _MAGAZ_Magaz_Samolyotikov_HPP_
#include "Abstarct_Magaz.hpp";
class Magaz_Samolyotikov : public Abstarct_Magaz
{
public:
    Magaz_Samolyotikov() = default;
    Magaz_Samolyotikov(const Magaz_Samolyotikov& other) = default;
    Magaz_Samolyotikov(std::string name)
    {
        SetName(name);
    }
    ~Magaz_Samolyotikov() = default;
private:

};

#endif