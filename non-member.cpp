#include <iostream>
#include <iomanip>
#include <cmath>
#include "non-member.hpp"
#include "money.hpp"
#include "hotdogstand.hpp"
using namespace MyAwesomeBusiness;
using std::cout;
using std::setw;
using std::vector;

void printRundown (const vector<HotdogStand> &franchises, int num)
{
    int standNumber = 0;
    int dogsSold = 0;
    int totalDogsSold = 0;
    Money pricePerDog = 0;
    Money standRevenue = 0;
    Money totalStandRevenue = 0;

    cout << setw(5) << "Stand" << setw(8) << "Sales" << setw(8) << "Price" << setw(10) << "Revenue" << endl;
    cout << setw(5) << "=====" << setw(8) << "=====" << setw(8) << "=====" << setw(10) << "========" << endl;


    for (int i = 0; i < num; i++)
    {
        standNumber = i+1;
        dogsSold = franchises[i].getDogsSold();
        pricePerDog = franchises[i].getPrice();
        standRevenue = franchises[i].getCash();
        totalStandRevenue += standRevenue;
        totalDogsSold += dogsSold;
        cout << setw(5) << standNumber << setw(8) << dogsSold << setw(8) << "$" pricePerDog << setw(10) << "$" standRevenue << endl;
    }
        
    cout << setw(5) << "TOTALS" << setw(8) << totalDogsSold << setw(8) <<  << setw(10) << "$" totalStandRevenue << endl;
    cout << "# of Stands: " << standNumber << endl;
}

