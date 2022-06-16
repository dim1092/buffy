
#include "../../headers/characters/Human.hpp"
#include "../../headers/actions/RandMove.hpp"

const Symbol* Human::SYMBOL =  &Symbol::HUMAN;

Human::Human(int posX, int posY) : Humanoid(posX, posY) {
}

const Symbol* Human::symbol() const {
   return SYMBOL;
}

void Human::setAction(const Field &field) {
   updateAction(new RandMove());
}

unsigned Human::moveRange() const {
   return MOVE_RANGE;;
}
