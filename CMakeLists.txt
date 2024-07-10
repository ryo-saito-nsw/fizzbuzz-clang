cmake_minimum_required(VERSION 3.22)

project(fizzbuzz CXX)

set(CMAKE_CXX_COMPILER "/usr/bin/clang++" CACHE STRING "clang compiler" FORCE)

set(LIBNAME fizzbuzz)
set(LIBSRC ./libsrc/fizzbuzz.cpp)

add_library(${LIBNAME} SHARED ${LIBSRC})
target_include_directories(${LIBNAME} PUBLIC ./libinc)

add_executable(test ./test/main.cpp)
target_link_libraries(test ${LIBNAME})

