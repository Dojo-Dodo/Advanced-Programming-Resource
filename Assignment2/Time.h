#ifndef TIME_H
#define TIME_H

#include <iostream>

typedef struct Time{
    int h,m,s;
}Time;

void displayTime(Time &t){
    cout << "output = " << t.h << ":" << t.m << ":" << t.s << endl;
}

void getTime(Time &t, int num){
    bool valid = false;
    char colon;
    //input with 00:00:00 format
    while(!valid){
        cout << "Enter the t" << num << " in 00:00:00 format :";
        cin >> t.h >> colon >> t.m >> colon >>t.s;
        //check the valid time
        valid = t.h<=23 && t.h>=0 && t.m<60 && t.h>=0 && t.s<60 && t.s>=0;
    }
}

Time subtract(Time &t1, Time &t2){
    Time output;
    int t1_all = (t1.h*3600)+(t1.m*60)+t1.s;
    int t2_all = (t2.h*3600)+(t2.m*60)+t2.s;

    int sum = t1_all-t2_all < 0 ? (24*3600)+(t1_all-t2_all) : t1_all-t2_all;

    output.h = sum / 3600;
    sum -= output.h*3600;
    output.m = sum / 60;
    sum -= output.m*60;
    output.s = sum;
    
    return output;
}
#endif