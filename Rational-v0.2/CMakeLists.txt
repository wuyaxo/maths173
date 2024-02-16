cmake_minimum_required(VERSION 3.26)
project(Rational_v0_2)

set(CMAKE_CXX_STANDARD 20)

add_executable(Rational_v0_2 main.cpp
        Rational.h
        Rational.cpp
        gcd.cpp)
