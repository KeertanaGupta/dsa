#include<iostream>
using namespace std;
class Node{
  public:
    int data;
    Node* next;

    Node(int val){
      data=val;
      next=NULL;
    }
};
class List{
  Node* head;
  Node* tail;

  public: 
    List(){
      head=tail=NULL;
    }
    void push_front(int val){
      Node* newNode=new Node(val); //dynamic object -> it will persist in the memory even after the end of function

      // Node newNode(val);  //static

      if(head==NULL){
        head=tail=newNode;
        return;
      }
      else{
        newNode->next = head;
        head=newNode;
      }
    }
  void printLL(){
      Node* temp=head;
      while(temp!=NULL){
      cout<<temp->data<<"->";
      temp=temp->next;
    }
    cout<<"NULL"<<endl;
  }
};
int main(){
  List ll;

  ll.push_front(1);
  ll.push_front(2);
  ll.push_front(3);
  
  ll.printLL();
  return 0;
}