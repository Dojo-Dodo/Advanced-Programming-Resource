#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    int sum = 0;
    for(int i = 1; i < argc; i++){
        sum += argv[i];
        //Change to
        // sum += atoi(argv[i])
        // atoi() means argument to integer
    }
    double avg = (double)sum/(argc-1);
    cout << avg << endl;
    return 0;
}
                                
