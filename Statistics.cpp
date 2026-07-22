#include "Statistics.h"
#include <iostream>

void Statistics::print(

    const std::vector<HttpStatus>& list

)
{
    std::cout

        << "\n--------------------------\n\n";

    std::cout

        << "Total archived codes: "

        << list.size()

        << "\n";
}
