//
// Created by dimde on 6/1/2022.
//

#ifndef BUFFY_KILL_HPP
#define BUFFY_KILL_HPP


#include "Action.hpp"
#include "ActOn.hpp"

class Kill : public ActOn {
public:
   Kill(Humanoid* h);
   void execute(Humanoid* h, Field& field) const override;
};


#endif //BUFFY_KILL_HPP
