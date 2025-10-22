#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    int sum = 0;
        for(int i = 1; i < argc; i++){
                sum += atoi(argv[i]);
                    }
                        double avg = (double)sum/(argc-1);
                            cout << avg << endl;
                                return 0;
                                }
                                
