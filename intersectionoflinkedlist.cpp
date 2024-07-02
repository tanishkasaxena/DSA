#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(node* &head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void intersect(node* &head1, node* &head2, int pos){
    node* temp1 = head1;
    pos--;
    while (pos-- && temp1 != NULL) {
        temp1 = temp1->next;
    }

    if (temp1 == NULL) {
        return; 
    }

    node* temp2 = head2;
    while (temp2->next != NULL) {
        temp2 = temp2->next;
    }
    temp2->next = temp1;

}


void display(node* head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int length(node* &head)
{
    int l = 0;
    node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        l++;
    }
    return l;
}

int intersection(node* &head1, node* &head2)
{

    int l1 = length(head1);
    int l2 = length(head2);

    int d = 0;
    node* ptr1;
    node* ptr2;
    if (l2 - l1)
    {
        d = l1 - l2;
        ptr1 = head2;
        ptr2 = head1;
    }

    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }

    while(d){
      ptr1=ptr1->next;
      if(ptr1==NULL){
        return -1;
      }  
      d--;
    }

    while(ptr1!=NULL && ptr2 != NULL){

        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    return -1;

}

int main()
{
    node* head1 = NULL;
    node* head2= NULL;
    insert(head1, 1);
    insert(head1, 2);
    insert(head1, 3);
    insert(head1, 4);
    insert(head1, 5);
    insert(head2, 9);
    insert(head2, 10);
    intersect(head1,head2,3);
    display(head1);
    display(head2);
    cout<<intersection(head1,head2)<<endl;

    return 0;
}
