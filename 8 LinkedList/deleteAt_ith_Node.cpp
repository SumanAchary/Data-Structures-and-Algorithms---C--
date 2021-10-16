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

Node* del_at_ith_Pos(Node *head, int i){
      if(i==0){        
        return head->next;
      }
      Node * copyHead = head;
      int count = 1;
      while(count<=i-1 && head!=NULL){
        head = head->next;
        count++;
      }
      if(head){
        
        head->next = head->next->next;
        return copyHead;
      }
      return copyHead;
}

int main(){
    Node *head = inputAtTail();
    head = del_at_ith_Pos(head,0); 
    print(head);
    return 0;

}