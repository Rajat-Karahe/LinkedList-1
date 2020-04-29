//Given a linked list and an integer n, append the last n elements of the LL to front.
//Indexing starts from 0. You don't need to print the elements, just update the elements and return the head of updated LL.
//Assume given n will be smaller than length of LL.
//Input format :

//Line 1 : Linked list elements (separated by space and terminated by -1)`

//head is the head of the linked list and n is  how many element you want to append from the last to the front
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

node* append_LinkedList(node* head,int n)
{
    node *last = head;
    int length=0;
    while(last->next != NULL){
        last = last->next;
        length++;
    }
    
    length++;
    node* temp = head;
    last->next = head;
    int i = length-n;
    while(i != 1){
        temp = temp->next;
        i--;
    }
    node* newHead = temp->next;
    temp->next = NULL;
    return newHead;
}

