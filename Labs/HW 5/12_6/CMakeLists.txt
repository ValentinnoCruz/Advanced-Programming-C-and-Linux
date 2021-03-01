cmake_minimum_required(VERSION 3.17)
project(12_6)

set(CMAKE_CXX_STANDARD 11)

add_executable(MemoryStuffDriver memory_stuff.h MemoryStuffDriver.cpp)
add_executable(ArrayListDriver ArrayList.h ArrayListDriver.cpp)
add_executable(StashDriver Stash.h StashDriver.cpp)