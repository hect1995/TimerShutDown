cmake_minimum_required(VERSION 3.5)

project(TimerShutDown LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
SET(CMAKE_CXX_FLAGS  "-static-libgcc -static-libstdc++ -Wl,-Bstatic -lstdc++ -lpthread -Wl,-Bdynamic")


set(CMAKE_CXX_STANDARD 17)

add_executable(timer
  TimerShutDown.cpp
)