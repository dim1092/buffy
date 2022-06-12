//
// Created by dimde on 6/2/2022.
//

#include "../../headers/actions/Chase.hpp"
#include <cmath>

using namespace std;

Chase::Chase(Humanoid *h) : ActOn(h) {
}

void Chase::execute(Humanoid *h, Field &field) const {
   double x = (double) getVictim()->posX() - (double) h->posX();
   double y = (double) getVictim()->posY() - (double) h->posY();

   if (x == 0 && y == 0)
      return;
   // Adding lamda for rounded cast to int correctness
   double lamdaX = x >= 0 ? 0.5 : -0.5;
   double lamdaY = y >= 0 ? 0.5 : -0.5;

   // Calculating x and why offset to move h towards victim
   int offsetX = int (x / sqrt(x * x + y * y) + lamdaX);
   int offsetY = int (y / sqrt(x * x + y * y) + lamdaY);
   h->move(offsetX, offsetY, field);

}
