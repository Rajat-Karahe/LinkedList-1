//Print a given linked list in reverse order. You need to print the tail first and head last. You can’t change any pointer in the linked list, just print it in reverse order.
//Input format : Linked List elements (separated by space and terminated by -1)

//Output format : Linked List elements in reverse order (separated by space)

class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void print_linkedlist_spl(node*head)
{
    if(head == NULL){
        return;
    }
    
    print_linkedlist_spl(head->next);
    cout << head->data << " ";
}
