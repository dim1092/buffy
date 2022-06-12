//
// Created by dimde on 6/2/2022.
//

#include "../../headers/utils/Rand.hpp"
#include <cstdlib>

Rand::Rand() {
   srand(SEED);
}

const Rand& Rand::getInstance() {
   static Rand instance;
   return instance;
}

int Rand::nextInt(int min, int max) const {
   return std::rand() % (max - min + 1) + min;
}


