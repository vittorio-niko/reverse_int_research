cmake_minimum_required(VERSION 3.15...4.2)
project(reverse_int LANGUAGES CXX)

add_subdirectory(pybind11)

pybind11_add_module(reverse_int reverse_int.cpp)