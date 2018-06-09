cmake_minimum_required(VERSION 2.8.0)
project(exchange_server)

find_package(Boost)
find_package(RapidJSON)
find_package(cpprestsdk REQUIRED NAMES cpprestsdk cpprest)

include_directories(include)
include_directories(${Boost_INCLUDE_DIRS})

file(GLOB SOURCES "src/cpp/*.cpp")

add_executable(exchange_server ${SOURCES})

target_link_libraries(exchange_server ${Boost_LIBRARIES})
