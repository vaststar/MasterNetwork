set(CMAKE_CXX_STANDARD 11)
aux_source_directory(${CMAKE_CURRENT_LIST_DIR} DIR_SRCS)

#build exe
add_executable(testServer ${DIR_SRCS})
target_link_libraries(testServer PRIVATE MasterServer)

add_test (NAME test_server1 COMMAND testServer)