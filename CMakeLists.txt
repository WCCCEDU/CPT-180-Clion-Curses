cmake_minimum_required(VERSION 3.3)
project(curses)

set(CURSES_NEED_NCURSES TRUE)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

FIND_PACKAGE(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})
set(SOURCE_FILES main.cpp)
add_executable(curses ${SOURCE_FILES})

target_link_libraries(curses ${CURSES_LIBRARIES})

