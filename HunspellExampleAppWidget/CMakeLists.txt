cmake_minimum_required(VERSION 3.5)

project(HUNSPEL_EXAMPLE_WIDGET)

set (CMAKE_CXX_STANDARD 17)


set(Example_VERSION_MAJOR 0)
set(Example_VERSION_MINOR 1)
set(Example_VERSION_PATCH 0)


add_subdirectory(HunspellLib)
add_subdirectory(DemoApp)

# USE_FOLDERS group cmake generated projects into one (CMakePredefinedTargets) folder
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Below line set Demo as startup application in Visual Studio
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT DemoApp)






