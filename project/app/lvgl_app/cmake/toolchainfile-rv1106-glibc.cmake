# Get current source and binary directories
SET(CURRENT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
SET(CURRENT_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR})

# Set cross-compilation toolchain
SET(CMAKE_SYSTEM_NAME Linux)
SET(CMAKE_SYSTEM_PROCESSOR arm)

SET(CMAKE_C_COMPILER arm-linux-gnueabihf-gcc)
SET(CMAKE_CXX_COMPILER arm-linux-gnueabihf-g++)

SET(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
SET(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
SET(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
