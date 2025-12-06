#include <iostream>
using namespace std;
#include "doubleLL.h"

int main(int argc, char* argv[]){
    doubleLL L1;
    L1.insertNodeStart(10);
    L1.insertNodeStart(20);
    L1.insertNodeStart(30);
    L1.insertNodeEnd(40);
    //insertNodeAfter(int input, int target)

    L1.printList();
    return 0;
}