
#include "Direction.hpp"
using ariel::Direction;
// #include "Notebook.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;
namespace ariel {
class Notebook
{
private:
    /* data */
public:
    char page;
    
    int size;
    string read(int x, int y, int z,Direction d, int a){
        return "";
    }

    void write(int x, int y, int z,Direction d, string str){
        ;
    }

    void erase(int x, int y, int z,Direction d, int a){
        ;
    }

    void show(int page){
        ;
    }
};

}