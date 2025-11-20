#ifndef LL_H
#define LL_H

#include "node.h"

class LL{
    private:
        node* hol;
        int size;

    public:
        LL();
        ~LL();
        void insertNode(int);
        void printList();
};

LL::LL(){
    hol = NULL;
    size = 0;
}

LL::~LL(){
    node* temp = hol;
    while(temp != nullptr){
        node* nxt = temp->getNext();           // save next before delete
        cout << "delete " << temp->getValue() << endl;
        delete temp;
        temp = nxt;
        size--;
    }
}

void LL::insertNode(int x){
    if(size == 0){
        hol = new node(x);
    }
    else{
        node* temp = new node(x);
        temp->setNext(hol);
        hol = temp;
    }
    size++;
}

void LL::printList(){
    node* temp = this->hol;
    while(temp->getNext() != nullptr){
        cout << temp->getValue() << "->";
        temp = temp->getNext();
    }
    cout << temp->getValue() << endl;
}

#endif