#include <iostream>

using namespace std;
#include "sorting.h"



int main(int argc, char* argv[]){
    int n = argc-1;
    int *a = new int[n];

    //cast from argument to array
    cout << "Origin : ";
    for(int i=0; i<n; i++){
        a[i] = atoi(argv[i+1]);
        cout << " " << a[i];
    }
    cout << endl;
    
    //Sorting Algorithm

    bubbleSort(a,n);
    //selectionSort(a,n);
    //insertionSort(a,n);

    delete[] a;
    return 0;
}