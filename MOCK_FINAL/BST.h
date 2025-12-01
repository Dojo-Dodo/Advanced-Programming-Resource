#include "treeNode.h"

class BST{
    private:
        treeNode* rootPtr;
        int size;
    public:
        BST(): rootPtr(nullptr), size(0){
        }
        treeNode* get_root();
        void insertNode(int x);
        void inOrder(treeNode* node);
        void preOrder(treeNode* node);
        void postOrder(treeNode* node);
};

treeNode* BST::get_root(){
    return rootPtr;
}

void BST::insertNode(int x){
    treeNode* newNode = new treeNode(x);
    
    if(size>0){
        treeNode* t = rootPtr;
        while(1){
            //go left
            if(x < t->getValue()){
                if(t->get_left() == nullptr){
                    t->set_left(newNode);
                    break;
                }
                t = t->get_left();
            }
            //go right
            else if(x > t->getValue()){
                if(t->get_right() == nullptr){
                    t->set_right(newNode);
                    break;
                }
                t = t->get_right();
            }
            //dup
            else{
                delete newNode;
                return;
            }
        }
    }
    else{
        rootPtr = newNode;
    }
    size++;
}

//LCR
void BST::inOrder(treeNode* node)
{
    if (node == nullptr) return;

    //traverse left
    inOrder(node->get_left());

    cout << node->getValue() << " ";

    //traverse right
    inOrder(node->get_right());
}

//CLR
void BST::preOrder(treeNode* node){
    if(node == nullptr) return;

    cout << node->getValue() << " ";

    preOrder(node->get_left());

    preOrder(node->get_right());

}

//LRC
void BST::postOrder(treeNode* node){
    if(node == nullptr) return;

    postOrder(node->get_left());

    postOrder(node->get_right());

    cout << node->getValue() << " ";

}
