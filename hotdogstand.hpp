//This is the header file for my hotdog class

#ifndef __HOTDOGSTAND__
#define __HOTDOGSTAND__
#include "money.hpp"

namespace MyAwesomeBusiness
{
	class HotdogStand
	{
	  public:
	    HotdogStand ();
	    HotdogStand (double price);
	  //accessor functions
	    const Money getCash() const;
	    const Money getPrice() const;
	    int getDogsSold() const;
	    const Money getStandRevenue() const;
	  //mutator functions
	    void setPrice(double newPrice);
	    void sellHotdog();
	    static int getNumStands();
	    static int getTotalHotdogsSold();
	    static int const Money getTotalRevenue();
	  private:
	    Money cash;
	    Money price;
	    int sold;
	    static int totalHotdogStands;
	    static int totalHotdogsSold;
	    static Money totalRevenueAcrossStands;
	};
}

#endif
