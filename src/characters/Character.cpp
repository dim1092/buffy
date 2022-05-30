
#include "../../headers/characters/Character.hpp"

void Character::move(const Position& newPos) {
   pos = newPos;
}

Character::Character(const Position &pos) : pos(pos){
}
