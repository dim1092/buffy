//
// Created by dimde on 6/1/2022.
//

#include "../../headers/actions/Bite.hpp"
#include "../../headers/characters/Vampire.hpp"

Bite::Bite(Humanoid* h) : ActOn(h) {
}

void Bite::execute(Humanoid* h, Field& field) const {
   field.add(new Vampire(*getVictim()));
   getVictim()->kill();
}
