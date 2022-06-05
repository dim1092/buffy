//
// Created by dimde on 6/2/2022.
//

#include "../../headers/utils/Rand.hpp"
#include <stdlib.h>

using namespace std;

Rand::Rand() {
   srand(SEED);
}

const Rand& Rand::getInstance() {
   static Rand instance;
   return instance;
}

const int Rand::nextInt(int min, int max) const {
   return int ((double) rand() / (RAND_MAX + 1) * max - min);
}


