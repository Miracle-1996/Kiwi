cmake_minimum_required(VERSION 3.10)
project(Kiwi_UnitTest)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS -pthread)

link_libraries(${PROJECT_SOURCE_DIR}/../lib_release/libkiwi.a)

add_executable(EventLoopPool_UnitTest EventLoopPool_UnitTest.cpp)
add_executable(EventLoop_UnitTest EventLoop_UnitTest.cpp)
add_executable(InetAddress_UnitTest InetAddress_UnitTest.cpp)
add_executable(TimerPool_UnitTest TimerPool_UnitTest.cpp)
add_executable(Buffer_UnitTest Buffer_UnitTest.cpp)
add_executable(Acceptor_UnitTest Acceptor_UnitTest.cpp)
