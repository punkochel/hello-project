cmake_minimum_required(VERSION 3.5)
project(HelloWorld)

add_executable(HelloWorld main.cpp)

add_library(MessageLib
	SHARED
	lib/hello.hpp
	lib/hello.cpp
)
target_link_libraries(HelloWorld MessageLib)