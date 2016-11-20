include_directories (${PROJECT_SOURCE_DIR}/include)

add_library (setoalgo SHARED setoalgo.cpp)
target_link_libraries (setoalgo ${CMAKE_THREAD_LIBS_INIT})