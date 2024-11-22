cmake_minimum_required(VERSION 3.29)
project(Torres_Barbara_ExamenCPP)

set(CMAKE_CXX_STANDARD 14)

include_directories(..)

add_executable(Torres_Barbara_ExamenCP2
        ESTUDIANTE/Estudiante.c
        ESTUDIANTE/Estudiante.h
        main.c
        main.h
)
