#include <iostream>
#include <cmath>
#include "timespread.h"
#include "getvolume.h"

int main() {

    // Declare and assign the variables to be used in timespread and getVolume functions
    float f1 = 0;
    float f2 = 0;
    float w = 0;
    float d = 0;

    std::cout << "Enter price for Future 1: " << "\n" ; // prompt user to enter price for future 1
    std::cin >> f1 ; // assign value to f1

    std::cout << "Enter price for Future 2: " << "\n" ; // prompt user to enter price for future 2
    std::cin >> f2 ; // assign value to f2

    std::cout << "Timespread value is :  " << timespread(f1,f2) << "\n" ; // return timespread value on futures

    std::cout << "Enter weight in tonnes: " << "\n" ; // prompt user to enter weight in tonnes
    std::cin >> w ; // assign value to w

    std::cout << "Enter density: " << "\n" ; // prompt user to enter density
    std::cin >> d ; // assign value to d

    std::cout << "Cubic metres is :  " << getVolume(w,d) << "\n" ; // return cubic metres volume

    return 0;
}