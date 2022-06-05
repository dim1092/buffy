//
// Created by dimde on 6/2/2022.
//

#ifndef BUFFY_CHASE_HPP
#define BUFFY_CHASE_HPP


#include "ActOn.hpp"

class Chase : public ActOn {
public:
   Chase(Humanoid* h);
   void execute(Humanoid* h, Field& field) const override;
};


#endif //BUFFY_CHASE_HPP
