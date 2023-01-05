cmake_minimum_required(VERSION 3.10)

project(server VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/../common
)

set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/../common/utilities.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/packet.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/session.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/server.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

# Add the static library
add_library(mylib STATIC IMPORTED)
set_property(TARGET mylib PROPERTY IMPORTED_LOCATION /home/leanne/wpre/mylib/lib/libmylib.a)




add_executable(${PROJECT_NAME} ${SOURCES})

find_package(Boost REQUIRED system thread)
target_link_libraries(${PROJECT_NAME} PRIVATE mylib ${Boost_LIBRARIES})
