//
// Created by dimde on 6/4/2022.
//

#ifndef BUFFY_BUFFYSTATS_HPP
#define BUFFY_BUFFYSTATS_HPP


class BuffyStats {
   unsigned _timesWon;
   const unsigned ITERATIONS;
public:
   BuffyStats(unsigned fieldWidth, unsigned fieldHeight, unsigned nbVampires, unsigned nbHumans, unsigned iterations);
   double successRate() const;
};


#endif //BUFFY_BUFFYSTATS_HPP
