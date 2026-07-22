#include "Repository.h"
#include "SampleData.h"

std::vector<HttpStatus> Repository::load()
{
    return statuses;
}
