cmake_minimum_required(VERSION 3.20)
project(debug_warmup LANGUAGES CXX)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)
enable_testing()
include(CTest)
include(GoogleTest)
add_subdirectory(tests)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_library(debugging_lib src/shapes.cpp)
target_include_directories(debugging_lib PUBLIC include)

add_executable(debug_warmup app/main.cpp)
target_link_libraries(debug_warmup PRIVATE debugging_lib)
