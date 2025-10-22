#include<iostream>
using namespace std;

int main(){
    const char* games[] = {"Grow A Garden", "Steal A Brainrot", "A Dusty Trip"};
    
    for(auto s : games){
        cout << s[3] << endl;
    }

    cout << *(*(games+1)+1) << endl;

    return 0;
}
