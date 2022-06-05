//
// Created by dimde on 6/1/2022.
//

#include "../../headers/actions/Kill.hpp"

Kill::Kill(Humanoid* h) : ActOn(h) {
}

void Kill::execute(Humanoid* h, Field& field) const {
   getVictim()->kill();
}
