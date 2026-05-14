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
// this function passed as a pointer
//------------------------------------------------------------------------------
bool sayHello()
{
    std::cout << "Hello!\n";
    return true;
}

//------------------------------------------------------------------------------
// this function will call function passed as a pointer
//------------------------------------------------------------------------------
bool demoFunctionPointer(bool (*func)())
{
    // Call the function
    return func();
}

//------------------------------------------------------------------------------
// #TODO 1) write a custom comparison function to be called by std::sort()
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main()
{
    // demo function pointer - pass the function as an argument
    if (demoFunctionPointer(sayHello))
        std::cout << "sayHello returned true.\n";

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

