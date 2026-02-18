#include <iostream>
#include <cstring>
using namespace std;

int main(){

    string arr[3] = {"Hello", "World", "Programming"};

    for(int i=0; i<3; i++){
        char* ptr = &arr[i][0];

        cout << *(ptr+1) << endl;
        cout << ptr[3] << endl;
    }
    return 0;
}