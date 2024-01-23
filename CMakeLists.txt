cmake_minimum_required(VERSION 3.26)
project(Warmup)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Warmup
        warmup.asrees.h
        warmup.asrees.c
        warmup-unit-tests.c)
