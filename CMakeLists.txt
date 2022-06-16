cmake_minimum_required(VERSION 3.19)
project(buffy)

set(CMAKE_CXX_STANDARD 14)

add_executable(buffy
        Main.cpp src/characters/Humanoid.cpp headers/characters/Humanoid.hpp src/characters/Buffy.cpp headers/characters/Buffy.hpp src/characters/Vampire.cpp headers/characters/Vampire.hpp src/actions/Chase.cpp headers/actions/Chase.hpp src/utils/Symbol.cpp headers/utils/Symbol.hpp src/characters/Human.cpp headers/characters/Human.hpp src/simulation/Field.cpp headers/simulation/Field.hpp headers/actions/Action.hpp src/actions/Kill.cpp headers/actions/Kill.hpp src/actions/RandMove.cpp headers/actions/RandMove.hpp src/actions/Bite.cpp headers/actions/Bite.hpp src/actions/ActOn.cpp headers/actions/ActOn.hpp src/actions/Chase.cpp headers/actions/Chase.hpp src/utils/Rand.cpp headers/utils/Rand.hpp src/UI/TerminalDisplayer.cpp headers/UI/TerminalDisplayer.hpp src/BuffyStats.cpp headers/BuffyStats.hpp src/Controller.cpp headers/Controller.hpp headers/simulation/FieldImpl.hpp)
