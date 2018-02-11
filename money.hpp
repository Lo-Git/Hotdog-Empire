//This is the header file for my money class

#ifndef __MONEY__
#define __MONEY__

namespace MyAwesomeBuisness
{

    class Money
    {
     public:
        Money ();
        Money (int dollars, int cents);
        Money (int dollars);
        Money (double dollars_or_cents);
    //accessor function
        int getPennies() const;
    //mutator functions
        bool isNegative() const;
        void add(const Money &m);
        void subtract(const Money &m);
        bool isEqual(const Money &m);
        void print() const;
    private:
        int dollars;
        int cents;
    };
}

#endif
