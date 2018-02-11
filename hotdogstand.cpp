#include "hotdogstand.hpp"
#include <iostream>
#include <cmath>
using namespace MyAwesoneBusiness;

HotdogStand::HotdogStand()
{
    Money hotdogStand;
    cash = 0;
    price = 3.5;
    sold = 0;
    totalHotdogStands ++;
}

HotdogStand::HotdogStand(double p)
{
    Money hotdogStand;
    cash = 0;
    price = p;
    sold = 0;
    totalHotdogStands ++;
}

//accessor functions
const Money HotdogStand::getCash() const
{
    return cash;
}

const Money HotdogStand::getPrice() const
{
    return price;
}

int HotdogStand::getDogsSold()
{
    return sold;
}

const Money HotdogStand::getStandRevenue() const
{
   double revenue = price*sold;
   return revenue;
}

//mutator functions
void HotdogStand::setPrice(double newPrice)
{
    price = newPrice;
}

void HotdogStand::sellHotdog()
{
    cash += price;
    sold ++;
    totalHotdogsSold ++;
}

static int HotdogStand::getNumStands()
{
    return totalHotdogStands;
}

static int HotdogStand::getTotalHotdogsSold()
{
    return totalHotdogsSold;
}

static int const Money HotdogStand::gotTotalRevenue()
{
    return totalRevenueAcrossStands;
}

//initializing static data members
static int HotdogStand::totalHotdogStands = 0;
static int HotdogStand::totalHotdogsSold = 0;
static Money HotdogStand::totalRevenueAcrossStands = 0;


