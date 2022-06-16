//
// Created by dimde on 6/4/2022.
//

#include "../headers/BuffyStats.hpp"
#include <cstdlib>
#include "../headers/simulation/Field.hpp"

using namespace std;

BuffyStats::BuffyStats(size_t fieldWidth, size_t fieldHeight, unsigned nbVampires, unsigned nbHumans)
   : _timesWon(0) {

   for (size_t i = 0; i < ITERATIONS; ++i) {
      Field f(fieldWidth, fieldHeight, nbVampires, nbHumans);

      while(!f.isGameOver()) {
         f.nextTurn();
      }

      if (f.won())
         ++_timesWon;
   }
}

double BuffyStats::successRate() const {
   return (double) _timesWon / ITERATIONS;
}
