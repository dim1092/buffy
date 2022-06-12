//
// Created by dimde on 6/2/2022.
//

#ifndef BUFFY_RAND_HPP
#define BUFFY_RAND_HPP

/**
 * Singleton lass to get random number on with a seed shared seed
 * @author De Bleser Dimitri
 * @author Peer Vincent
 */
class Rand {
   static const int SEED = 1;

   /**
    * Class constructor to set the seed
    */
   Rand();
   Rand(const Rand&) = delete;
public:
   /**
    * @return the class's single instance
    */
   static const Rand& getInstance();

   /**
    * Random int
    * @param min value allowed
    * @param max value allowed
    * @return Random int between min and max
    */
   int nextInt(int min, int max) const;
};


#endif //BUFFY_RAND_HPP
