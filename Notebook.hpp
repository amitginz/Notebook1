#pragma once
#include "Direction.hpp"

#include <string>
#include <iostream>
using namespace std;
#include <stdexcept>


namespace ariel {
    class Notebook
    {
    private:
        /* data */
    public:
        Notebook() {}
        ~Notebook() {}

        string read(int page, int row, int column,ariel::Direction direction, int length){return "";}
        
        void write(int page, int row, int column,ariel::Direction direction, string a){}

        void erase(int page, int row, int column,ariel::Direction direction, int length){}

        void show(int page){}
    };

}
