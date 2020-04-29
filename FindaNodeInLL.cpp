//Given a linked list and an integer n you need to find and return index where n is present in the LL. Do this iteratively.
//Return -1 if n is not present in the LL.

//Line 1 : Linked list elements (separated by space and terminated by -1)
//Line 2 : Integer n 

class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 

int indexOfNIter(Node *head, int n) {
   
    if(head==NULL){
        return -1;
    }
    
    if(head->data == n){
        return 0;
    }
    
    int temp = indexOfNIter(head->next, n);
    if(temp == -1){
        return -1;
    }
    
    else{
        return temp+1;
    }
}


