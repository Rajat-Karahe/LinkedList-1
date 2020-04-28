// Given a linked list, find and return the length of input LL. Do it iteratively.

// Linked list elements (separated by space and terminated by -1)

 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
// readInput(Node* head, Node* tail){
//     int data;
//     cin>> data;
//     while(data != -1){
//         if(head == NULL){
//             head->data = data;
//             head->next = NULL;
//             tail = NULL;
//         }
//         else{
            
//         }
//     }
// }

int length(Node *head) {
   
    int length = 0;
    while(head != NULL){
        length++;
        head = head->next;
    }
    
    return length;
}


