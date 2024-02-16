cmake_minimum_required(VERSION 3.26)
project(shape)

set(CMAKE_CXX_STANDARD 20)

add_executable(shape main.cpp
        Rectangle.cpp
        Rectangle.h
        Quadrilateral.cpp
        Quadrilateral.h
        Square.cpp
        Square.h
        Rhombus.cpp
        Rhombus.h)
