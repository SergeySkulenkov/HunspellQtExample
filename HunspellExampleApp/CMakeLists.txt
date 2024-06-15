cmake_minimum_required(VERSION 3.5)

project(HUNSPEL_EXAMPLE)

set (CMAKE_CXX_STANDARD 17)


set(Example_VERSION_MAJOR 0)
set(Example_VERSION_MINOR 1)
set(Example_VERSION_PATCH 0)


add_subdirectory(HunspellLib)
add_subdirectory(DemoApp)

