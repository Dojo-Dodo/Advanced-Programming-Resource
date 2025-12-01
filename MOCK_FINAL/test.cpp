#include <iostream>
using namespace std;
#include "LL.h"

int main(int argc, char* argv[]){
    LL list;
    
    list.insertNode(45);
    list.insertNode(12);
    list.insertNode(8);
    list.insertNode(10);

    list.printList();
    
    list.insertNodeAfter(9, 8);
    list.printList();

    list.insertNodeAfter(55, 1);
    return 0;
}