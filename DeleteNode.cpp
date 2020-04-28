//Given a linked list and a position i, delete the node of ith position from Linked List iteratively.
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
 

Node* deleteNode(Node *head, int i) {
   
    Node* temp = head;
    int count=0;
    if(i == 0){
        Node* newHead = head->next;
        delete head;
        return newHead;
    }
    
    while(temp != NULL && count < i-1){
        temp = temp->next;
        count++;
    }
    
    if(temp->next != NULL){
        Node *newNode = temp->next;
        temp->next = newNode->next;
        delete newNode;
    }
    
    return head;
}


