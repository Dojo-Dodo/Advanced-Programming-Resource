#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
    char string[1000];
    cin >> string;

    char *l, *r;
    int length = strlen(string);
    l = string;
    r = string+length-1;

    while(l < r){
        cout << *l;
        cout << *r;
        l++;
        r--;
    }
    if(length%2 ==1){
        int mid = (length/2);
        cout << string[mid];
    }
    cout << endl;
    return 0;
}