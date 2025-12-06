class doubleNode{
    private:
        int value;
        doubleNode* next;
        doubleNode* prev;
    public:
        doubleNode(int val): value(val), next(nullptr), prev(nullptr){}
        int getValue();
        doubleNode* getNext();
        doubleNode* getPrev();

        void setNext(doubleNode*);
        void setPrev(doubleNode*);
};

int doubleNode::getValue() {return value;}
doubleNode* doubleNode::getNext() {return next;}
doubleNode* doubleNode::getPrev() {return prev;}

void doubleNode::setNext(doubleNode* x) {next = x;}
void doubleNode::setPrev(doubleNode* x) {prev = x;}
