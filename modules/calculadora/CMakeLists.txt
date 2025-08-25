file(GLOB SRC_FILES src/*.c)
add_executable(calculadora ${SRC_FILES})

target_include_directories(calculadora PRIVATE include)

target_link_libraries(calculadora PRIVATE m)
