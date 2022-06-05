//
// Created by dimde on 6/1/2022.
//

#ifndef BUFFY_BITE_HPP
#define BUFFY_BITE_HPP

#include "Action.hpp"
#include "ActOn.hpp"

class Bite : public ActOn {
public:
   Bite(Humanoid* h);
   void execute(Humanoid* h, Field& field) const override;
};


#endif //BUFFY_BITE_HPP
