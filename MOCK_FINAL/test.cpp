#include <iostream>
using namespace std;
#include "BST.h"

int main(int argc, char* argv[]){
    BST tree;

    tree.insertNode(10);
    tree.insertNode(11);
    tree.insertNode(12);

    tree.inOrder(tree.get_root());
    return 0;
}