#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    for(char** p = argv; p < argc+argv; p++){
        cout << *(*p+1) << endl;
    }
    return 0;
}