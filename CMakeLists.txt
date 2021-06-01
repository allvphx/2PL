cmake_minimum_required(VERSION 3.19)
project(2PL)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_FLAGS -pthread)

add_executable(2PL main.cpp storage/lock.h transaction/txn.h storage/storage.h transaction/PL_test.cpp)