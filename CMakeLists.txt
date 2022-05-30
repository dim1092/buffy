cmake_minimum_required(VERSION 3.19)
project(buffy)

set(CMAKE_CXX_STANDARD 14)

add_executable(buffy
        Main.cpp src/characters/Character.cpp headers/characters/Character.hpp src/characters/Buffy.cpp headers/characters/Buffy.hpp src/characters/Vampire.cpp headers/characters/Vampire.hpp src/utils/Position.cpp headers/utils/Position.hpp src/utils/Position.cpp src/utils/Color.cpp headers/utils/Color.hpp src/characters/Human.cpp headers/characters/Human.hpp src/characters/Killer.cpp headers/characters/Killer.hpp)
