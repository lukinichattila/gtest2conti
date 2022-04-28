#set(CMAKE_C_COMPILER "C:/MinGW/bin/g++.exe")
set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe")
project(GTEST)
cmake_minimum_required(VERSION 3.13.0)
set(CMAKE_PROJECT_VERSION 1.0.1)
set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 11)

include( FetchContent )

set(GTEST_HOME "${CMAKE_CURRENT_BINARY_DIR}/gtest")

FetchContent_Declare (
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.8.1
  SOURCE_DIR "${GTEST_HOME}/src"
  BINARY_DIR "${GTEST_HOME}/build"
)

FetchContent_GetProperties( googletest )

if(NOT googletest_POPULATED)
  FetchContent_Populate(googletest)
  add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()

FetchContent_MakeAvailable( googletest )

enable_testing()

set (include_directorys ${PROJECT_SOURCE_DIR}/include)
set (source_directorys ${PROJECT_SOURCE_DIR}/src)



add_library(sourcefiles ${source_directorys}/addition.cpp ${source_directorys}/math.cpp)
add_executable(main main.cpp)
target_include_directories(sourcefiles PUBLIC ${include_directorys})
target_link_libraries(main sourcefiles)
################################################################################
# test build files
set (Sources  ${source_directorys}/additionmock.cpp ${source_directorys}/math.cpp)
add_library(math STATIC ${Sources})
target_link_libraries(math gtest_main gmock_main)

target_include_directories(math PUBLIC ${include_directorys})

add_executable(maintest maintest.cpp)
target_include_directories(maintest PUBLIC ${PROJECT_SOURCE_DIR})
target_link_libraries(maintest math gtest_main gmock_main)
