//
// Created by dimde on 5/30/2022.
//

#include "../../headers/utils/Position.hpp"

Position::Position(int posX, int posY) {
   this->posX = posX;
   this->posY = posY;
}

Position::Position(const Position &pos) {
   posX = pos.posX;
   posY = pos.posY;
}
