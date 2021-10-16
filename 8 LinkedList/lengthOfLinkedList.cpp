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

Node *takeInput_atTail(){
    

        int data;
        cin >> data;

        Node *head = NULL;
        Node *tail = NULL;


        // if user passes, -1, we would stop;
        while(data != -1){
            Node *node = new Node(data);
            
            if(head == NULL){
            head  = node;
            tail = node;
            }else{
                tail->next = node;
                tail = node;
            }
            cin >> data;
        }

        return head;
}

void length(Node* head){
        int count = 0;
        while(head != NULL){
            head = head->next;
            count++;
        }
        cout << "number of Nodes are: "<<count ;
         
}

int main(){
    Node *head = takeInput_atTail();
    length(head);    
    return 0;
}