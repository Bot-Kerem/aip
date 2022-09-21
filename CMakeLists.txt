cmake_minimum_required(VERSION 3.0)

project(aip)

add_library(aip
    src/NeuralNetwork.cpp)

target_include_directories(aip PUBLIC include)

# Tests

add_executable(test1 tests/neuralnetwork.cpp)
target_link_libraries(test1 aip)