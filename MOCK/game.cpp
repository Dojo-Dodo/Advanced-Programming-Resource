#include<iostream>
using namespace std;

int main(){
    const char* games[] = {"Grow a garden", "Steal a brainrot", "A dusty trip"};
    for(auto s : games){
        cout << s[3] << endl;
    }
    return 0;
}
