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
        void insertNodeAfter(int, int);
};

LL::LL(){
    hol = NULL;
    size = 0;
}

LL::~LL(){
    cout << "====Destructor====" << endl;
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
        node* t = hol;
        while(t->getNext() != nullptr){
            t = t->getNext();
        }
        node* n = new node(x);
        t->setNext(n);
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

void LL::insertNodeAfter(int newNode, int target){
    if(size>0){
        
        node* t = this->hol;

        while(t != nullptr && t->getValue() != target){
            t = t->getNext();
        }
        if(t == nullptr){
            cout << "we cannot find " << target << " in LL" << endl;
            return;
        }

        node* n = new node(newNode);

        n->setNext(t->getNext());
        t->setNext(n);
    }
    else{
        cout << "The linked list is empty!" << endl;
    }
    
}

#endif