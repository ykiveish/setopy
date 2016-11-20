add_executable (example example.cpp)
target_link_libraries (example setoalgo ${CMAKE_THREAD_LIBS_INIT})

message (INFO ${PROJECT_SOURCE_DIR})