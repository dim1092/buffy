//
// Created by dimde on 6/1/2022.
//

#include "../../headers/actions/ActOn.hpp"

ActOn::ActOn(Humanoid* victim) : Action(), victim(victim) {
}

Humanoid* ActOn::getVictim() const {
   return victim;
}
