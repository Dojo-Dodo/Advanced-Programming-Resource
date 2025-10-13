#include <iostream>
#include <cmath>

using namespace std;

int pow(int a){
    return a*a;
}

float distance(int x1, int y1, int x2, int y2){
    return sqrt((pow(x2-x1)) + (pow(y2-y1)));
}

int main(void){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    cout << distance(x1, y1, x2, y2) << endl;
}