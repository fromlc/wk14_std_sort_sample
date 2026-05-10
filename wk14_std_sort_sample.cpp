//------------------------------------------------------------------------------
// wk14_std_sort_sample.cpp
//
// Demos custom comparison function called by std::sort()
//------------------------------------------------------------------------------
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

//------------------------------------------------------------------------------
// data struct
//------------------------------------------------------------------------------
struct FunMeter
{
    std::string activity;
    unsigned stars;

    bool operator<(FunMeter& rhs)
    {
        return this->stars < rhs.stars;
    }

    bool operator>(FunMeter& rhs)
    {
        return this->stars > rhs.stars;
    }
};

//------------------------------------------------------------------------------
// overloaded stream insertion operator <<
//------------------------------------------------------------------------------
std::ostream& operator<<(std::ostream& os, const FunMeter& fm)
{
    std::string rating(fm.stars, '*');
    std::cout << fm.activity << ": " << rating;

    return os;
}

//------------------------------------------------------------------------------
// custom comparison function will be called by std::sort()
//------------------------------------------------------------------------------
bool getMostFun(FunMeter& fun1, FunMeter& fun2)
{
    return fun1.stars > fun2.stars;
}

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main()
{
    std::vector<FunMeter> vFun = {
          { "Finals week", 1 }
        , { "My graduation day", 5 }
        , { "Big Dipper roller coaster ride", 3 }
        , { "A night at the opera", 2 }
        , { "Beach bonfire with friends", 4 }
        , { "Winning the Lotto", 5 }
    };

    // sort vector in ascending order of stars
    std::sort(vFun.begin(), vFun.end());

    // display vector elements
    std::cout << "\nFrom least to most fun:\n\n";
    for (FunMeter& fm : vFun)
    {
        std::cout << fm << "\n";
    }

    // sort vector in descending order of stars
    std::sort(vFun.begin(), vFun.end(), getMostFun);

    // display vector elements
    std::cout << "\nFrom most to least fun:\n\n";
    for (FunMeter& fm : vFun)
    {
        std::cout << fm << "\n";
    }

    std::cout << "\nHappy Trails!\n";
}

