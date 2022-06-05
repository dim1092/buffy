//
// Created by dimde on 6/2/2022.
//

#ifndef BUFFY_RAND_HPP
#define BUFFY_RAND_HPP


class Rand {
   static const int SEED = 1;
   Rand();
   Rand(const Rand&) = delete;
public:
   static const Rand& getInstance();
   const int nextInt(int min, int max) const;
};


#endif //BUFFY_RAND_HPP
