cmake_minimum_required(VERSION 3.10)

project(HttpStatusArchive)

set(CMAKE_CXX_STANDARD 17)

add_executable(
    http-status-archive

    main.cpp

    Repository.cpp

    SearchEngine.cpp

    Renderer.cpp

    Statistics.cpp
)
