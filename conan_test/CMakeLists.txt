cmake_minimum_required(VERSION 3.20)

project(conantest CXX)

add_executable(${PROJECT_NAME} main.cpp)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

target_link_libraries(${PROJECT_NAME} CONAN_PKG::rang)
