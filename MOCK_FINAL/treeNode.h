
class treeNode{
    private:
        int value;
        treeNode* left;
        treeNode* right;
    public:
        treeNode(int x): value(x), left(nullptr), right(nullptr){
        }
        int getValue();
        void set_left(treeNode*);
        void set_right(treeNode*);
        treeNode* get_left();
        treeNode* get_right();
};

int treeNode::getValue(){
    return value;
}

void treeNode::set_left(treeNode *l){
    left = l;
}

void treeNode::set_right(treeNode *r){
    right = r;
}

treeNode* treeNode::get_left(){
    return left;
}

treeNode* treeNode::get_right(){
    return right;
}



