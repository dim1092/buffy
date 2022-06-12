//
// Created by dimde on 6/4/2022.
//

#ifndef BUFFY_BUFFYSTATS_HPP
#define BUFFY_BUFFYSTATS_HPP

#include <cstdlib>

/**
 * Class running a buffy simulation n times and mesures the success rate of buffy.
 * @author De Bleser Dimitri
 * @author Vincent Peer
 */
class BuffyStats {
   unsigned _timesWon;
   static const unsigned ITERATIONS = 1000;
public:
   /**
    * Class constructor
    * @param fieldWidth
    * @param fieldHeight
    * @param nbVampires
    * @param nbHumans
    */
   BuffyStats(size_t fieldWidth, size_t fieldHeight, unsigned nbVampires, unsigned nbHumans);

   /**
    * @return Buffy's success rate for the number of iterations runned
    */
   double successRate() const;
};


#endif //BUFFY_BUFFYSTATS_HPP
