//Check if a given linked list is palindrome or not. Return true or false.
//Indexing starts from 0.
//Input format : Linked list elements (separated by space and terminated by -1)

//head is the head of you linked list
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

node* reverse(node *head){
    if(head->next ==  NULL){
        return head;
    }
    node* next_ele = head->next;
    node* temp = reverse(head->next);
    next_ele->next = head;
    head->next = NULL;
    return temp;
}

bool check_palindrome(node* head)
{
    int length =0;
    node* last = head;
    while(last->next != NULL){
        last = last->next;
        length++;
    }
    length++;
    node* newHead = head;
    
    if(length%2 == 0){
        int i = length/2-1;
        while(i != 0){
            newHead = newHead->next;
            i--;
        }
        node *temp = newHead->next;
        newHead->next = NULL;
        newHead = reverse(temp);
    }
    else{
        int i = length/2-1;
        while(i != 0){
            newHead = newHead->next;
            i--;
        }
        node *temp = newHead->next->next;
        delete newHead->next;
        newHead->next = NULL;
        newHead = reverse(temp);
    }
    
    //Comapring two linked list
    while(head != NULL || newHead != NULL){
        if(head->data != newHead->data){
            return false;
        }
        head = head->next;
        newHead = newHead->next;
    }
    
    if(head == NULL && newHead == NULL){
        return true;
    }
    
    return false;
}

