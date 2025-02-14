#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
   
   Node(int data){
    this->data=data;
    this->next=NULL;
   }
};
void InsertHead(Node* &head,int d){
    Node* temp=new Node(d);  //d==data
    temp->next=head;
    head=temp;
}
void InsertTail(Node* &tail,int d){
    Node* temp=new Node(d);
        tail->next=temp;
        tail=tail->next; //or  tail=temp

    }

   
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
       cout<<temp->data<<" ";  
       temp=temp->next;
    }
    cout<<endl;
}
void Deleteatbegining(Node* &head){
    Node* temp=head;
    head=head->next;
    cout<<temp->data<<endl;
    temp->next=NULL;
    free(temp);
}
void DeleteatEnd(Node* &head){
    Node* temp=head;
    while(temp!=NULL && temp->next!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main(){
    Node* node1=new Node(10);
    cout<<node1->data<<endl;
    node1->next=NULL;
     //cout<<node1->next<<endl;

    Node* head=node1;
    Node* tail=node1;
    print(head);
    InsertTail(tail,12);
    print(head);
    InsertTail(tail,34);
    print(head);
    Deleteatbegining(head);
    print(head);
    DeleteatEnd(head);
    print(head);
    return 0;
}