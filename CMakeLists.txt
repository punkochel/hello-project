cmake_minimum_required(VERSION 3.5)
project(MessageProject)

add_executable(MessageProject main.cpp)

add_library(MessageLib
	SHARED
	lib/message.cpp
)

target_link_libraries(MessageProject MessageLib)