#include <iostream>
using namespace std;

class Box {
public:
    int banana;

    Box(int b) {
        banana = b;
    }

    Box operator+(Box o) {
        int total = this->banana + o.banana;
        return Box(total);
    }

    Box operator-(Box other) {
        int total = this->banana - other.banana;
        return Box(total);
    }
    
};