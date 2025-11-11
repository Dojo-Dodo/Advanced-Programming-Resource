#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void display(int *a,int n){
    cout << "Output: ";
    for(int i=0; i<n-1; i++){
        cout <<a[i] << " ";
    }
    cout << endl;
}
// Bubble sort in descending order
void bubbleSort(int *a, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]<a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
    display(a,n);
}

//How to run
// g++ 9-bubbleSort.cpp
// ./a.out 54 26 78 10 23 45
// Output: 78 54 45 26 23 


int main(int argc, char* argv[]){
    int n = argc - 1; 
    int* a = new int[n];
    
    for(int i=0; i<n; i++){
        a[i] = atoi(argv[i+1]);
    }

    bubbleSort(a, n);

    delete[] a;
    return 0;
}