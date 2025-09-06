cmake_minimum_required(VERSION 4.0)
project(rng_tests)

set(CMAKE_CXX_STANDARD 23)

add_executable(rng_tests main.cpp
        pcg.h
        pcg.cpp
        random_pcg.cpp
        random_pcg.h)
