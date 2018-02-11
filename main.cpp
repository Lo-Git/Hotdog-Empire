#include "money.hpp"
#include "hotdogstand.hpp"
#include "non-member.hpp"
#include <iostream>
#include <cmath>
#include <random>
#include <vector>
#include <string>

using namespace MyAwesomeBusiness;
using std::string;
using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::vector;
using std::stod;

int main()
{
    int numberOfStands;
    int howManySellFancy;
    int nonFancyStands;
    double pricePerFancy;
    string ppfString;

//declare the vector of franchises
    vector<HotdogStand> franchises;

    cout << "Welcome!\n";
    cout << "How many hotdog stands do you own? ";
    cin >> numberOfStands;
    cout << endl;

    cout << "How many of those sell fancy hotdogs? ";
    cin >> howManySellFancy;
    cout << endl;

    if (howManySellFancy > 0)
    {
        cout << "How much does a fancy hotdog cost? ";
        getline(cin, ppfString);

      //take input and check for $ sign
        if (ppfString[0] == '$')
        {
            ppfString = ppfString.substr(1);
        }

        pricePerFancy = stod(ppfString);
        
        nonFancyStands = numberOfStands - howManySellFancy;
    }
    
    else
    {
        nonFancyStands = numberOfStands;
    }

  //using rand function from c++ reference website
    std::random_device generator;
    std::uniform_int_distribution<int> hotdogPerDay(20,60);
    std::uniform_int_distribution<int> fancyHDPerDay(1, 30);

  //create an entry in the vector for each stand
    for (int i = 0; i < numberOfStands; i++)
    {
        franchises.push_back(i);
    }

  //decide random amount of non-fancy dogs and sell them
    for (int j = 0; j < nonFancyStands; j++)
    {
        for (int rand = hotdogPerDay(generator); rand != 0; rand--)
        {
            franchises[j].sellHotdog();
        }
    }

  //decide random amount of fancy dogs and sell them
    for (int k = 0; k < numberOfStands; k++)
    {
        for (int rand2 = fancyHDPerDay(generator); rand2 != 0; rand2--)
        {
            franchises[k].setPrice(pricePerFancy);
            franchises[k].sellHotdog();
        }
    }

    printRundown(franchises, numberOfStands);
  
  return 0;
}
