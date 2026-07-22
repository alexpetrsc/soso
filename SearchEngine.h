#pragma once

#include "HttpStatus.h"
#include <vector>

class SearchEngine
{
public:

    HttpStatus find(

        const std::vector<HttpStatus>&,

        int code

    );
};
