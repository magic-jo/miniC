cmake_minimum_required(VERSION 3.16.3)
project(miniClib C) # miniClib -> nom du projet (doit être unique!), C -> langage du projet ; CXX pour C++
# project(miniC VERSION 0.1 LANGUAGES C) # marche aussi
add_library(${PROJECT_NAME} SHARED square.c square.h) # SHARED pour créer une librairie partagée (.so) ; statique (.a) par défaut
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} "${PROJECT_BINARY_DIR}") # dire quels fichiers sont visibles à l'extérieur de la lib