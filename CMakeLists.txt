cmake_minimum_required (VERSION 2.8)
project (setopy-api)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

message (INFO "Setopy configuration.")

FIND_PACKAGE (Threads)

include_directories (
	${PROJECT_SOURCE_DIR}/include
)

link_directories (
	${PROJECT_SOURCE_DIR}/libs
)

add_subdirectory (src)
add_subdirectory (examples)