#pragma once
#include "Direction.hpp"
using ariel::Direction;

#include <iostream>
#include <stdexcept>
using namespace std;

namespace ariel {
    class Notebook
    {
    private:
        /* data */
    public:
        

        string read(int x, int y, int z,Direction d, int a);
        
        void write(int x, int y, int z,Direction d, string a);

        void erase(int x, int y, int z,Direction d, int a);

        void show(int x);
    };

}
