//
// Created by dimde on 6/1/2022.
//

#include "../../headers/actions/RandMove.hpp"
#include "../../headers/utils/Rand.hpp"
RandMove::RandMove() : Action(){
}

void RandMove::execute(Humanoid* h, Field &field) const {
   h->move(Rand::getInstance().nextInt(- (int) h->moveRange(), (int) h->moveRange()),
           Rand::getInstance().nextInt(- (int) h->moveRange(), (int) h->moveRange()), field);
}
