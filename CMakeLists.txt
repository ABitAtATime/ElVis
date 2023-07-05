cmake_minimum_required(VERSION 3.12)
project(ElVis)

set(CMAKE_CXX_STANDRAD 17)

include_directories(include)

set(SOURCES
    src/main.cpp
)

find_package(SFML 2.5 COMPONENTS audio graphics window system REQUIRED)


add_executable(ElVis ${SOURCES})
target_link_libraries(ElVis sfml-system sfml-window sfml-graphics)


set_target_properties(ElVis PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)



# Set compiler flags
if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(ElVis PRIVATE -Wall -Wextra -Wpedantic)
elseif (MSVC)
    target_compile_options(ElVis PRIVATE /W4 /WX)
endif ()