//
// Created by dimde on 6/4/2022.
//

#include "../headers/BuffyStats.hpp"
#include <cstdlib>
#include "../headers/simulation/Field.hpp"
#include "../headers/UI/TerminalDisplayer.hpp"

using namespace std;

BuffyStats::BuffyStats(unsigned fieldWidth, unsigned fieldHeight,
                       unsigned nbVampires, unsigned nbHumans, unsigned iterations)
   : _timesWon(0), ITERATIONS(iterations) {

   for (size_t i = 0; i < ITERATIONS; ++i) {
      Field f(fieldWidth, fieldHeight);
      f.addVampire(nbVampires);
      f.addHuman(nbHumans);

      TerminalDisplayer disp(f);
//      disp.displayField(f);
      while(f.hasVamp()) {
         f.nextTurn();
      }

      if (f.hasHuman())
         ++_timesWon;
   }
}

double BuffyStats::successRate() const {
   return (double) _timesWon / ITERATIONS;
}
