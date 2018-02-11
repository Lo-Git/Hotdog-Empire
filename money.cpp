#include "money.hpp"
#include <iostream>
#include <cmath>
using namespace MyAwesomeBusiness;

Money::Money()
{
    dollars = 0;
    cents = 0;
}

Money::Money(int d, int c)
{
    dollars = d;
    cents = c;
}

Money::Money(int d)
{
    dollars = d;
    cents = 0;
}

Money::Money(double o)
{
    double money = o;
    int coins = (money*100);
    dollars = int(money);
    cents = round(coins - (dollars*100)); 
}

//accesor function
int Money::getPennies() const
{
    int pennies;
    pennies = (dollars * 100) + cents;
    return pennies;
}

//mutator functions
bool Money::isNegative() const
{
    if(dollars < 0 || cents < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Money::add(const Money &m)
{
    dollars += m.dollars;
    cents += m.cents;
}

void Money:subtract(const Money &m)
{
    dollars -= m.dollars;
    cents -= m.cents;
}

bool Money::isEqual(const Money &m)
{
    if(getPennies() = m.getPennies())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Money::print() const
{
    double balanceCombined;
    balanceCombined = (dollars + (cents*0.01));

    std::cout.precision(2);
    std::cout.setf(std::ios::fixed);

    if (balanceCombined < 0)
    {
        std::cout << "($" << std::abs(balanceCombined) << ")";
    }
    else
    {
        std::cout << "$" << balanceCombined;
    }
}

