file(GLOB SRC_FILES src/*.c)
add_executable(files ${SRC_FILES})

target_include_directories(files PRIVATE includes)
