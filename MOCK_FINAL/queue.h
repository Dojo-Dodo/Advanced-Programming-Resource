#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"

class queue{
    private:
        int size = 0;
        node* head = nullptr;
        node* tail = nullptr;
    public:
        queue();
        ~queue();
        void enqueue(int );
        void dequeue();
};

queue::queue() = default;

queue::~queue(){
    node* temp = head;
    while(temp != nullptr){
        node* nxt = temp->getNext();
        cout << "delete " << temp->getValue() << endl;
        delete temp;
        temp = nxt;
        size--;
    }
}
void queue::enqueue(int x){
    node* n = new node(x);
    if(size == 0){
        head = n;
        tail = n;
    }
    else{
        tail->setNext(n);
        tail = n;
    }
    size++;
}

void queue::dequeue(){
    if(size>0){
        node* temp = head;
        head = head->getNext();
        delete temp;
        size--;
    }
    else{
        cout << "No node insdie the queue" << endl;
    }
}




#endif