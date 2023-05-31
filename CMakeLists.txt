cmake_minimum_required(VERSION 3.17)
project(QT)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 CONFIG REQUIRED COMPONENTS Widgets)

add_executable(out main.cpp application.h application.cpp)
target_link_libraries(out PUBLIC Qt5::Widgets)