#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
       int data;
       Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;

    }
};


Node *inputAtTail(){
    Node *head = NULL;
    Node *tail = NULL;

    int inpData;
    cin >> inpData;
    
 
    while(inpData != -1){
        
         Node *node = new Node(inpData);
         if(head == NULL){
             head = node;
             tail = node;
         }else{
             tail->next = node;
             tail = node;
         } cin >> inpData;
    }

    return head;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " => ";
        head = head->next;
        
    }
    cout << "NULL\n";
}

Node* insertAtithPos(Node *head, int i, int data){
      if(i<0){
        return head;
      }
      if(i==0){
        Node* n = new Node(data);
        n->next = head;
        head = n;
        return head;
      }
      Node * copyHead = head;
      int count = 1;
      while(count<=i-1 && head!=NULL){
        head = head->next;
        count++;
      }
      if(head){
        Node *n = new Node(data);
        Node *temp = head->next;
        head->next = n;
        n->next = temp;
        return copyHead;
      }
      return copyHead;
}

int main(){
    Node *head = inputAtTail();
    head = insertAtithPos(head,0,500); 
    print(head);
    return 0;

}