#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    int n = argc-1;
    int *a = new int[n];
    int min_Index = 0;

    for(int i=0; i<n; i++){
        a[i] = atoi(argv[i+1]);
        if(a[i]<a[min_Index]){
            min_Index = i;
        }
    }
    int GCD;
    for(int i=1; i<=a[min_Index]; i++){
        if(a[min_Index]%i==0){
            bool isGCD = true;
            for(int j=0; j<n; j++){
                if(a[j]%i!=0){
                    isGCD = false;
                    break;
                }
            }
            if(isGCD){
                GCD = i;
            }
        }
    }
    //cout << "Minimum element is " << a[min_Index] << endl;
    cout << GCD << endl;
    delete[] a;
    return 0;
}