//
// Created by dimde on 5/30/2022.
//

#include "../../headers/utils/Color.hpp"

Color::Color(const char *name) : NAME(name){
}

const Color Color::BLUE = Color("Blue"),
            Color::YELLOW = Color("Yellow"),
            Color::PURPLE = Color("Purple");