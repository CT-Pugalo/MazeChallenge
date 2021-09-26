cmake_minimum_required(VERSION 3.16)
project(MazeChallenge)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(MazeChallenge
        src/Case.h
        src/coordonee.h
        src/Joueur.h
        src/main.cpp
        src/Maze.h
        )
