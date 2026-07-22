#include "SearchEngine.h"

HttpStatus SearchEngine::find(

    const std::vector<HttpStatus>& list,

    int code

)
{
    for(const auto& item : list)
    {
        if(item.code == code)
            return item;
    }

    return {};
}
