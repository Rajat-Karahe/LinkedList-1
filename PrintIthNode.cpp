//Given a linked list and a position i, print the node at ith position.
//If position i is greater than length of LL, then don't print anything.

 * Following is the Node class that is already written.
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 

void printIthNode(Node *head, int i) {
    
    int count = 0;
    Node* temp = head;
    while(count != i && temp != NULL){
        temp = temp->next;
        count++;
    }
    
    if(temp == NULL){
        return;
    }
    
    cout << temp->data << endl;
}

// int count = 0;
// Node* temp = head;
// while(temp != NULL){
//     if(count == i){
//         cout << temp->data;
//         return;
//     }
    
//     count++;
//     temp = temp->next;
// }

