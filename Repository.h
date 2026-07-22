#pragma once

#include "HttpStatus.h"
#include <vector>

class Repository
{
public:

    std::vector<HttpStatus> load();
};
