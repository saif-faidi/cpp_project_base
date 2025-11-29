#include <iostream>

#include "nlohmann/json.hpp"

#include "kwo.h"

int adder_kwo( int a)
{
    std::cout << "Cout: kWO is here" << '\n';
    std::cout << NLOHMANN_JSON_VERSION_MAJOR << '\n';
    if (a == 1 ) {
        return 0; 
    }
    return 1;
}

