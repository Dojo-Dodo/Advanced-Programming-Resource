#include <iostream>
#include <iomanip>

using namespace std;
#include "Time.h"

int main(){
    Time t1, t2, output;
    getTime(t1,1);
    getTime(t2,2);
    output = subtract(t1,t2);
    displayTime(output);
    return 0;
}