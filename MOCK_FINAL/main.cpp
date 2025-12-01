#include <iostream>
#include <string>

using namespace std;

#include "2-pokemon.h"

int main(int argc, char* argv[]){
    
    Pokemon p1("Charmander", 155, 'f', 'm', 10, 256);
    Pokemon p2("Charmeleon", 160, 'f', 'm', 16, 0);
    Pokemon p3("Charizard",  165, 'f', 'm', 36, 0);

    p1.set_nextForm(&p2);
    p2.set_nextForm(&p3);

    Pokemon *current = &p1;
    current->printStats();
    
    return 0;
}