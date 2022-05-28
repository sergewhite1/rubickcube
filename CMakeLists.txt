cmake_minimum_required(VERSION 3.10)

project("rubik_cube_solver-project")

#set(CMAKE_VERBOSE_MAKEFILE TRUE)

set(rubik_cube_solver_app "rubik_cube_solver_app")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

add_executable(${rubik_cube_solver_app} 
  RubikCube.cpp
  main.cpp)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  target_compile_options(${rubik_cube_solver_app} PUBLIC -g -Wall -Wextra)
endif()

