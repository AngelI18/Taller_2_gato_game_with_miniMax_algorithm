cmake_minimum_required(VERSION 3.29)
project(Taller_2_gato_game_with_minMax_algorithm)

set(CMAKE_CXX_STANDARD 20)

add_executable(Taller_2_gato_game_with_minMax_algorithm main.cpp
        Player.h
        Player.cpp
        Bot.h
        Bot.cpp)
