#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    int n = argc-1;
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += atoi(argv[i]);
        cout << argv[i] << endl; 
    }
    cout << "Sum: " << sum << endl;
    //cout << "argv[0]: " << argv[0] << endl;
    return 0;
}