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

bool print_ith_node(Node *head, int i){

        int count = 0;
        while( head!=NULL){
                if(count == i){
                    cout << head->data;
                    return true;
                }
                head = head->next;
                count++;
        }

        return false;

}

int main(){
    Node *head = inputAtTail();
    print_ith_node(head,2);    
    return 0;

}