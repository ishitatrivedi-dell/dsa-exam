
class Node {
    public : 
    int value ;
    Node * next ;
    Node* prev ;
    Node* child ;

    Node(int val) {
        this->value = val ;
        this->next = nullptr ;
        this->prev = nullptr ;
        this->child = nullptr ;
    }
};

Node* flattenLinkedList(Node* head) {
    if (head == nullptr) {
        return nullptr ;
    }

    Node* temp = head ;
    Node* tail = head ;
    while (tail->next != nullptr) {
        tail = tail->next ;
    }

    while (temp != nullptr) {
        if (temp->child != nullptr) {
            tail->next = temp->child ;
            temp->child->prev = tail ;

            Node* temp = temp->child ;
            while (temp->next != nullptr) {
                temp = temp->next ;
            }
            tail = temp ;

            temp->child = nullptr ;
        }
        temp = temp->next ;
    }

    return head ;
}