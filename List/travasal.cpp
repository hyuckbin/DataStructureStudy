#include <iostream>
using namespace std;
// 단일 연결 리스트
//travasal

class Node{
    public:
        int data;
        Node *next;
        Node(int val): data(val),next(nullptr){}
    
};

// void travasal(Node* head){
//     while(head!=nullptr){
//         cout << head->data << "->";
//         head = head->next;
//     }
//     cout<<"NULL"<<endl;
// }
void travasal(Node* head){
    if(head==nullptr){
        cout<<"null"<<endl;
        return;
    }
    cout << head->data<<"->";

    travasal(head->next);
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    travasal(head);
    return 0;
}