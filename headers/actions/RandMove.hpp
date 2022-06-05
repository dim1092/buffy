
#ifndef BUFFY_RANDMOVE_HPP
#define BUFFY_RANDMOVE_HPP


#include "Action.hpp"

class RandMove : public Action {

public:
   RandMove();
   void execute(Humanoid* h, Field& field) const override;
};


#endif //BUFFY_RANDMOVE_HPP
