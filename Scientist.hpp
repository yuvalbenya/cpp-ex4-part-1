#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic {

    class Scientist: public Player {
        int n;

        public:
            Scientist(Board& b, City c, int n): Player(b, c, "Scientist") {
                this->n = n;
            }
            Player& discover_cure(Color c);
    };
    

    Player& Scientist::discover_cure(Color c){return *this;}
}