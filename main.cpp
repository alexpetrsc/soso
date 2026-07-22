#include "Repository.h"
#include "SearchEngine.h"
#include "Renderer.h"
#include "Statistics.h"
#include "Config.h"

int main()
{
    Repository repository;

    auto list = repository.load();

    SearchEngine engine;

    auto result =

        engine.find(

            list,

            SEARCH_CODE

        );

    Renderer renderer;

    renderer.print(result);

    Statistics stats;

    stats.print(list);

    return 0;
}
