cmake_minimum_required(VERSION 3.7)
project(simplefuncresty)

set(CMAKE_C_STANDARD 99)

include_directories(/Users/jonathanlee/dev/lua-5.1.5/src)
link_libraries(/Users/jonathanlee/dev/lua-5.1.5/src/liblua.a)

set(SOURCE_FILES library.c library.h)
add_library(simplefuncresty SHARED ${SOURCE_FILES})