cmake_minimum_required(VERSION 3.16.3)
project(miniCapp C)
add_executable(${PROJECT_NAME} main.c)
target_link_libraries(${PROJECT_NAME} miniClib)

add_executable(myAppWithAnotherName main.c)
target_link_libraries(myAppWithAnotherName miniClib)