#ifndef NODE_H
#define NODE_H

class node{
    private:
        int value = 0;
        node* next= nullptr;
    public:
        node(int);
        void setNext(node* a);
        node* getNext();
        void setValue(int a);
        int getValue();
        
};

node::node(int x){
    this->value = x;
    node* next= nullptr;
}

void node::setNext(node* a){
    this->next = a;
}

node* node::getNext(){
    return this->next;
}

void node::setValue(int a){
    this->value = a;
}

int node::getValue(){
    return value;
}



#endif