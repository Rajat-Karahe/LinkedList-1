//Given a sorted linked list (elements are sorted in ascending order). Eliminate duplicates from the given LL, such that output LL contains only unique elements.
//You don't need to print the elements, just remove duplicates and return the head of updated LL.
//Input format : Linked list elements (separated by space and terminated by -1)

// Following is the node structure
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

node* eliminate_duplicate(node* head)
{
    //write your code here
    node* temp = head;
    while(temp->next != NULL){
        if(temp->data != temp->next->data){
            temp = temp->next;
        }
        
        else{
            node *new_temp = temp->next;
            temp->next = new_temp->next;
            delete new_temp;
        }
    }
    
    return head;
}
