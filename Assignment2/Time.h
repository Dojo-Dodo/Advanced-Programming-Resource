#ifndef TIME_H
#define TIME_H

#include <iostream>

typedef struct Time{
    int h,m,s;
}Time;

void displayTime(Time &t){
    cout << t.h << ":" << t.m << ":" << t.s << endl;
}

void getTime(Time &t){
    bool valid = false;
    char colon;
    //input with 00:00:00 format
    while(!valid){
        cin >> t.h >> colon >> t.m >> colon >>t.s;
        //check the valid time
        valid = t.h<=23 && t.h>=0 && t.m<60 && t.h>=0 && t.s<60 && t.s>=0;
    }
}

Time subtract(Time &t1, Time &t2){
    Time output;
    //subtract second
    if(t1.s-t2.s > 0){
        output.s = t1.s-t2.s;
    }
    else{
        if(t1.m > 0){
            t1.m--;
            output.s = t1.s+60-t2.s;
        }
        else{
           if(t1.h > 0){
                t1.h--;
                t1.m += 59;
                output.s = t1.s+60-t2.s;
           }
           else{
                t1.h += 23;
                t1.m += 59;
                output.s = t1.s+60-t2.s;
           }
        }
    }

    //subtract minute
    if(t1.m-t2.m > 0){
        output.m = t1.m-t2.m;
    }
    else{
        if(t1.h > 0){
            t1.h--;
            output.m = t1.m+60-t2.m;
        }
        else{
            t1.h += 23;
            output.m = t1.m+60-t2.m;
        }
    }
    //subtract hour
    output.h = (t1.h - t2.h)<0 ? t1.h+24-t2.h : t1.h-t2.h;
    return output;
}
#endif