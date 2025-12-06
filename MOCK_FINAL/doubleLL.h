#include "doubleNode.h"

class doubleLL{
    private:
        int size;
        doubleNode* head;
        doubleNode* tail;

    public:
        doubleLL(): size(0), head(nullptr){}
        
        ~doubleLL() {
            doubleNode* current = head;
            while (current != nullptr) {
                doubleNode* nextNode = current->getNext();
                delete current;
                current = nextNode;
            }
            cout << "List deleted and memory freed." << endl;
        }

        void insertNodeEnd(int );
        void insertNodeStart(int );
        void printList();

};

void doubleLL::insertNodeEnd(int x){
    doubleNode* n = new doubleNode(x);
    if(size>0){
        tail->setNext(n);
        n->setPrev(tail);
        tail = n;
    }
    else{
        head = n;
        tail = n;
    }
    size++;
}

void doubleLL::insertNodeStart(int x){
    doubleNode* n = new doubleNode(x);
    if(size>0){
        head->setPrev(n);
        n->setNext(head);
        head = n;
    }
    else{
        head = n;
        tail = n;
    }
    size++;
}

void doubleLL::printList(){
    doubleNode* t = head;
    while(t != nullptr){
        cout << t->getValue() << " ";
        t = t->getNext();
    }
    cout << endl;
}



