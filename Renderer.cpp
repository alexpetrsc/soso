#include "Renderer.h"
#include <iostream>

void Renderer::print(

    const HttpStatus& s

)
{
    std::cout

        << "Searching for: "

        << s.code

        << "\n\n";

    std::cout

        << s.code

        << " "

        << s.title

        << "\n\n";

    std::cout

        << "Category:\n"

        << s.category

        << "\n\n";

    std::cout

        << "Description:\n"

        << s.description

        << "\n\n";

    std::cout

        << "Example:\n"

        << s.example

        << "\n";
}
