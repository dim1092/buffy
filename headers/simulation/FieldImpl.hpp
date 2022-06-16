#ifndef BUFFY_FIELDIMPL_HPP
#define BUFFY_FIELDIMPL_HPP

#include "../utils/Rand.hpp"
#include "../characters/Humanoid.hpp"
template<typename T>
Humanoid* Field::getClosest(const Humanoid* from) const {
   Humanoid* closest = nullptr;
   unsigned minDistance = UINT_MAX;

   for (Humanoid* h : _humanoids) {
      if (dynamic_cast<T*>(h) != nullptr && h->isAlive()) {
         unsigned dist = from->distance(h);
         if (dist == 1)
            return h;

         if (dist < minDistance) {
            minDistance = dist;
            closest = h;
         }
      }
   }
   return closest;
}

template <typename T >
void Field::addHumanoid(unsigned amount) {
   for (size_t i = 0; i < amount; ++i)
      _humanoids.push_back(new T(Rand::getInstance().nextInt(0, (int) WIDTH - 1),
                                 Rand::getInstance().nextInt(0, (int)HEIGHT - 1)));
}


#endif //BUFFY_FIELDIMPL_HPP
