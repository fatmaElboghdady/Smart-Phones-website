#include<iostream>
using namespace std;
#define max 10
struct node{
    int data;
    node*next; //node type of struct
};
void printList(struct node*n){
   while (n != NULL) { //focuse on while 
        cout << n->data << " ";
        n = n->next;
    }
   
}

// Given a reference (pointer to pointer)
// to the head of a list and an int,
// inserts a new node on the front of
// the list.
void push(node** head_ref, int new_data)// ** is pointer to another pointer..
{
   
    // 1. allocate node
    node* new_Node = new node();
 
    // 2. put in the data
    new_Node->data = new_data;
 
    // 3. Make next of new node as head
    new_Node->next = (*head_ref);
 
    // 4. Move the head to point to
    // the new node
    (*head_ref) = new_Node;
}
class stack{
    private:
     int top;

  public:
   
     int arr[max];
     int pop();
  stack(){
top=-1;
  }
int push(int n){
if(top==max-1){
    cout<<"stack is overflow";
}
else if(top==-1){
    top++;
    top=0;
     return arr[top];
}
else{
    top++;
    return arr[top];
}
return arr[top];
  }
};
int main(){
node*head=NULL; // null is captlaize;
node*second=NULL;
node*third=NULL;
  head = new node(); //don't forget to create the 
  /*
  head
  second
  third
  */
    second = new node();
    third = new node();
head->data=1;
head->next=second;
second->data=2;
second->next=third;
third->data=3;
third->next=NULL;
// push((),5);
stack c;
c.push(5);
c.push(4);
c.push(3);
printList(head);
}