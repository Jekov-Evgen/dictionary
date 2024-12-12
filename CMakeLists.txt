cmake_minimum_required(VERSION 3.10)

project(dictionary)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
    main.cpp
    header.cpp
)

add_executable(DictionaryProject ${SOURCES})
