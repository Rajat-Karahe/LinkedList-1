//Given a linked list, an integer n and a position i, Insert that node n into Linked List at ith position recursively.
//If position i is greater than length of LL, then you should return the same LL without any change. And if position i is equal to length of input LL, insert the node at last position.
//Indexing starts from 0. You don't need to print the elements, just insert and return the head of updated LL.


//head is head of linked list,i is the index, data is data of your node
 class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
 };

Node* insertNodeRec(Node *head, int i, int data) {
   
    if(head ==  NULL){
        if(i != 0)
            return head;
        Node *newNode = new Node(data);
        return newNode;
    }
    
    if(i == 0){
        Node *newNode = new Node(data);
        newNode->next = head;
        return newNode;
    }
    
    Node* newHead = insertNodeRec(head->next, i-1, data);
    head->next = newHead;
    return head;
}



