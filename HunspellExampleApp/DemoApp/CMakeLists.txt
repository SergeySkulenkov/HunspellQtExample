cmake_minimum_required(VERSION 3.5)
configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/version.h.in"
    "${CMAKE_CURRENT_BINARY_DIR}/version.h"
)

include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_executable(Demo main.cpp version.h)


target_link_libraries(Demo
        HunspellLib
)

install(TARGETS Demo DESTINATION demo)


if (WIN32)
    add_custom_command(TARGET Demo POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${CMAKE_CURRENT_BINARY_DIR}/../HunspellLib/libHunspellLib.dll"
            $<TARGET_FILE_DIR:Demo>)

endif (WIN32)


add_custom_command(TARGET Demo POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${CMAKE_CURRENT_SOURCE_DIR}/dictionaries/ru_RU.dic"
            $<TARGET_FILE_DIR:Demo>)
add_custom_command(TARGET Demo POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${CMAKE_CURRENT_SOURCE_DIR}/dictionaries/ru_RU.aff"
            $<TARGET_FILE_DIR:Demo>)
