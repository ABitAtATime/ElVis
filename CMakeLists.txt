cmake_minimum_required(VERSION 3.12)
project(ElVis)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

set(SOURCES
    src/main.cpp
    src/ElVis.cpp
    src/algorithm/sorting/Sorting.cpp
    src/algorithm/sorting/bubble.cpp
    src/algorithm/sorting/quicksort.cpp
    src/algorithm/sorting/mergeSort.cpp
    src/algorithm/sorting/selectionsort.cpp
    src/algorithm/sorting/insertionsort.cpp

    src/algorithm/sorting/heapsort.cpp
    src/algorithm/sorting/radixsort.cpp


    src/visualizer/sortvis.cpp
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