cmake_minimum_required(VERSION 3.15)
project(ClaseBrais LANGUAGES C)

set(CMAKE_C_FLAGS_DEBUG "-g -O0")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(modules/files)
add_subdirectory(modules/calculadora)
