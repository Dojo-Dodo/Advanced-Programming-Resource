#ifndef STACK_H
#define STACK_H

#include "node.h"

class stack{
    private:
        node* top = nullptr;
        int size = 0;
    public:
        stack();
        ~stack();
        void insertNode(int );
        void pop();

}

stack::stack = default;

stack::~stack(){
    node* temp = top;
    while(temp != nullptr){
        node* nxt = temp->getNext();
        cout << "delete " << temp->get_value() << endl;
        delete temp;
        temp = nxt;
        size--;
    }
}

void stack::insertNode(int x){
    node* n = new node(x);
    if(size == 0){
        top = n;
    }
    else{
        n->setNext(top);
        top = n;
    }
    size++;
}

void stack::pop(){
    if(size < 0){
        cout << "no node to pop!" << endl;
    }
    else{
        node* temp = top;
        top = top->getNext();
        cout << 'pop '<< temp->get_value() << endl;
        delete temp;
        size--;
    }
}


#endif