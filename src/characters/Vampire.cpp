
#include "../../headers/characters/Vampire.hpp"
#include "../../headers/actions/Kill.hpp"
#include "../../headers/actions/Chase.hpp"
#include "../../headers/actions/Bite.hpp"
#include "../../headers/utils/Rand.hpp"
#include "../../headers/characters/Human.hpp"
#include "../../headers/simulation/Field.hpp"

const Symbol* Vampire::SYMBOL =  &Symbol::VAMPIRE;


Vampire::Vampire(int posX, int posY) : Humanoid(posX, posY) {
}

Vampire::Vampire(const Humanoid& h) : Humanoid(h.posX(), h.posY()) {
}

const Symbol* Vampire::symbol() const {
   return SYMBOL;
}

void Vampire::setAction(const Field& field) {
   Humanoid* closest = field.getClosest<Human>(this);
   if (closest == nullptr)
      return;
   else if (distance(closest) == 1) {
      // Kill or transform 50/50 chance
      int rand = Rand::getInstance().nextInt(0, RAND_MAX);
      if (rand % 2 == 0)
         updateAction(new Kill(closest));
      else
         updateAction(new Bite(closest));
   }
   else
      updateAction(new Chase(closest));
}

unsigned Vampire::moveRange() const {
   return MOVE_RANGE;;
}


