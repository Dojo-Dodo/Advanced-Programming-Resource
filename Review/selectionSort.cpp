#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void display(int *a,int n){
    for(int i=0; i<n-1; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(int argc, char* argv[]){
    int n = argc-1;
    int a = new int[n];
    int mi = 0
    for(int i=0; i < )
}