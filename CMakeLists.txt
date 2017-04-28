cmake_minimum_required(VERSION 3.7)
project(GymCard)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp GenerationCard.h QueryCard.h AllHeader.h OperationCardLib.h)
add_executable(GymCard ${SOURCE_FILES})