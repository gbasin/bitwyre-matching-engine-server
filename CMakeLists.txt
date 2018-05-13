cmake_minimum_required(VERSION 2.8.9)
project(exchange_server)

find_package(Boost)
find_package(RapidJSON)
find_package(Pistache)

#Bring the headers, such as Student.h into the project
include_directories(include)
include_directories(${Boost_INCLUDE_DIRS})
include_directories(${RapidJSON_INCLUDE_DIRS})

#Can manually add the sources using the set command as follows:
#set(SOURCES src/main.cpp)
 
#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/cpp/*.cpp")

add_executable(exchange_server ${SOURCES})
target_link_libraries(exchange_server ${Boost_LIBRARIES} pistache pthread)
