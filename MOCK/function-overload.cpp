#include <iostream>

using namespace std;

int add(int a, int b){
    return a+b;
}

double add(double a, double b){
    return a/b;
}

int main(){
    cout << add(3,2) << endl;
    cout << add(3.0,2.0) << endl;
    return 0;
}

