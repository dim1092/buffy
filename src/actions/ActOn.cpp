//
// Created by dimde on 6/1/2022.
//

#include "../../headers/actions/ActOn.hpp"

ActOn::ActOn(Humanoid* h) : Action(), victim(h) {
}

Humanoid* ActOn::getVictim() const {
   return victim;
}
