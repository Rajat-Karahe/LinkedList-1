 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

int help(Node *head, int length){
    if(head == NULL){
        return length;
    }
    
    length++;
    return help(head->next, length);
}

int length(Node *head) {
   
    int length =0;
    return help(head, length);

}


