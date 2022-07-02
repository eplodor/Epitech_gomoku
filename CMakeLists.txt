cmake_minimum_required(VERSION 3.18)
project(gomoku LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)
conan_basic_setup()

file(GLOB SOURCES "src/*.cpp")

add_executable(pbrain-eplodor ${SOURCES})