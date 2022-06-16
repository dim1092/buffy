//
// Created by dimde on 6/2/2022.
//

#include "../../headers/actions/Chase.hpp"
#include <cmath>

using namespace std;

Chase::Chase(Humanoid *h) : ActOn(h) {
}

void Chase::execute(Humanoid *h, Field &field) const {
   int x = getVictim()->posX() - h->posX();
   int y = getVictim()->posY() - h->posY();

   if (x == 0 && y == 0)
      return;
   // Adding lamda for rounded cast to int correctness
   double roundX = x >= 0 ? 0.5 : -0.5;
   double roundY = y >= 0 ? 0.5 : -0.5;

   // Direction vector norm
   double vectorX = x == 0 ? 0 : x / sqrt(x * x + y * y);
   double  vectorY = y == 0 ? 0 : y / sqrt(x * x + y * y);

   // Applying range
   int offsetX = (int) (vectorX * h->moveRange() + roundX);
   int offsetY = (int) (vectorY * h->moveRange() + roundY);

   // Limiting not to overtake or overlap
   int maxOffsetX = x > 0 ? x - 1 : x + 1;
   int maxOffsetY = y > 0 ? y - 1 : y + 1;
   offsetX = abs(maxOffsetX) < abs(offsetX) ? x : offsetX;
   offsetY = abs(maxOffsetY) < abs(offsetY) ? y : offsetY;

   h->move(offsetX, offsetY, field);

}
