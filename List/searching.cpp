#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int val): data(val) , next(nullptr){}
};

void search(Node* c ,int s){
    int i=1;
    while(c!=nullptr){
        if(c->data == s){
            cout <<i<<" 번째 "<<s<<" 발견"<<endl;
            return;
        }
        c= c->next;
        i++;
    }
    cout <<s<<" 는 없습니다"<<endl;
}
int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(34);

    search(head,3);

    search(head,2);
    search(head,34);

    return 0;
}