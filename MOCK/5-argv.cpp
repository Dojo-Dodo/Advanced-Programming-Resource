#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    for(char** p = argv; p < argc+argv; p++){
        cout << *(*p+1) << endl;
    }
    return 0;
}

// How to run
// g++ 5-argv.cpp -o IHateThis
// ./IHateThis code cuz it is boring