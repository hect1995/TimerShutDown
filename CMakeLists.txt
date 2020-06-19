cmake_minimum_required(VERSION 3.5)
project(TimerShutDown LANGUAGES CXX)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
SET(CMAKE_CXX_FLAGS  "-static-libgcc -static-libstdc++ -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive")
set(CMAKE_CXX_STANDARD 17)
set(ANDROID_NDK_ROOT "/Users/hectoresteban/Documents/C++/Qt/android-ndk-r21d")
set(CMAKE_PREFIX_PATH "/Users/hectoresteban/Qt/5.15.0/clang_64/lib/cmake/Qt5")

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# search for pkg-config
include (FindPkgConfig)
if (NOT PKG_CONFIG_FOUND)
    message (FATAL_ERROR "pkg-config not found")
endif ()

find_package(Qt5 COMPONENTS Core Widgets LinguistTools REQUIRED)
add_executable(timer TimerShutDown.cpp)

target_link_libraries(timer Qt5::Core Qt5::Widgets)