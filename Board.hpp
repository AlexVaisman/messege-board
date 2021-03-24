#pragma once
#include "Direction.hpp"
#include <string>
#include <vector>

namespace ariel{

    class Board{

        public:
        Board();
        ~Board();
        void post(unsigned int row,unsigned int column, Direction direction , std::string messege);
        static std::string read(unsigned int row,unsigned int column, Direction direction , unsigned int length);
        void show();
    };

}