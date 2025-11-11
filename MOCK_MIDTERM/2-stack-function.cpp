#include<iostream>
using namespace std;

void A_function(int a);
void B_function(int &a);
void C_function(int a);

int main(){
    int a = 1;
    for(int i=0; i<3; i++){
        //A_function(a);
        //B_function(a);
        C_function(a);
    }
    a -= 1;
    cout << a << endl;
    return 0;
}

void A_function(int a){
    a += 10;
    cout << a << endl;
}

void B_function(int &a){
    a += 10;
    cout << a << endl;
}

void C_function(int a){
    static int c = a;
    c += 10;
    cout << c << endl;
}
