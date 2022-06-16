
#include "../../headers/characters/Buffy.hpp"
#include "../../headers/actions/Kill.hpp"
#include "../../headers/actions/Chase.hpp"
#include "../../headers/actions/RandMove.hpp"
#include "../../headers/characters/Vampire.hpp"
#include "../../headers/simulation/Field.hpp"


const Symbol* Buffy::SYMBOL =  &Symbol::BUFFY;

Buffy::Buffy(int posX, int posY) : Humanoid(posX, posY) {
}

const Symbol* Buffy::symbol() const{
   return SYMBOL;
}

void Buffy::setAction(const Field& field) {
   Humanoid* closest = field.getClosest<Vampire>(this);

   if (closest == nullptr)
      updateAction(new RandMove());
   else if (distance(closest) <= 1)
      updateAction(new Kill(closest));
   else
      updateAction(new Chase(closest));
}

unsigned Buffy::moveRange() const {
   return MOVE_RANGE;
}

bool Buffy::canMove(int offsetX, int offsetY, const Field &field) {
   return true; // Buffy is allowed to overlap other humanoids
}

