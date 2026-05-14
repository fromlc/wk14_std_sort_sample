//------------------------------------------------------------------------------
// wk14_std_sort_sample.cpp
//
// Demos custom comparison function called by std::sort()
//
// #TODO 1) write a custom comparison function to be called by std::sort()
// #TODO 2) call std::sort() to sort vector vfun in descending order of stars
// #TODO 3) write a range-based for loop to display elements of vector vFun
//------------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>

//------------------------------------------------------------------------------
// data struct
//------------------------------------------------------------------------------
struct FunMeter
{
    std::string activity;
    int stars;
};

//------------------------------------------------------------------------------
// #TODO 1) write a custom comparison function to be called by std::sort()
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main()
{
    std::vector<FunMeter> vFun = {
        { "finals week", 1 }
        , { "my graduation day", 5 }
        , { "roller coaster ride", 4 }
        , { "a night at the opera", 2 }
        , { "beach bonfire with friends", 3 }
    };

    // #TODO 2) call std::sort() to sort vector vFun in descending order of stars

    // #TODO 3) write a range-based for loop to display elements of vector vFun

    std::cout << "\nHappy Trails!\n";
}

