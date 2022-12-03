cmake_minimum_required(VERSION 3.24)
project(c_study C)

set(CMAKE_C_STANDARD 11)

add_library(c_study library.c main.c)
