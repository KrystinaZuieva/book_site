cmake_minimum_required(VERSION 3.26)
project(book_lib_manag)

set(CMAKE_CXX_STANDARD 17)

add_executable(book_lib_manag main.cpp
        Book.cpp
        Book.h
        Library.cpp
        Library.h)
