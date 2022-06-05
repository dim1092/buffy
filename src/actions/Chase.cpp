//
// Created by dimde on 6/2/2022.
//

#include "../../headers/actions/Chase.hpp"
#include <cmath>

using namespace std;

Chase::Chase(Humanoid *h) : ActOn(h) {
}

void Chase::execute(Humanoid *h, Field &field) const {
   // Not a straight line, but will take the same number of steps as a virtual (pixelated) straight line
   int x = getVictim()->posX() - h->posX();
   int y = getVictim()->posY() - h->posY();

   // Adding lamda for rounded cast to int correctness
   int lamdaX = x > 0 ? 0.5 : -0.5;
   int lamdaY = y > 0 ? 0.5 : -0.5;

   int offsetX = (int) round((double) x / sqrt(x * x + y * y)) + lamdaX;
   int offsetY = (int) round((double) y / sqrt(x * x + y * y)) + lamdaY;
   h->move(offsetX, offsetY, field);
}
