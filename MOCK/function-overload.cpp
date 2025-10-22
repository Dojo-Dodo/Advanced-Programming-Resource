#include <iostream>

using namespace std;

int add(int a, double b){
    return a+b;
}

double add(double b, int a){
    return (a+b)*2;
}

int main(){
    cout << add(3,2.0) << endl;
    cout << add(2.0,3) << endl;
    return 0;
}

