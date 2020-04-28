//Given a linked list and a position i, delete the node of ith position from Linked List recursively.
//If position i is greater than length of LL, then you should return the same LL without any change.
//Indexing starts from 0. You don't need to print the elements, just delete the node and return the head of updated LL.

 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 

Node* deleteNodeRec(Node *head, int i) {
   
    if(head == NULL){
        return head;
    }
    
    if(i == 0){
        Node* newHead;
        newHead = head->next;
        delete head;
        return newHead;
    }
    
    head->next = deleteNodeRec(head->next, i-1);
    return head;
}


