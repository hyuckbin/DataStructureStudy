//bool 버전으로
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int val): data(val) , next(nullptr){}
};

// bool search(Node* head , int key){
//     while(head !=nullptr){
//         if(head->data == key){
//             return true;
//     }
//         head = head->next;
//     }

//     return false;
// }

bool search(Node* h , int key){
    Node *curr = h;
    if(curr == NULL) return false;
    if(curr->data == key) {
        return true;
    }
    else curr = curr->next;

    search(curr , key);

}
int main(){
    Node *head = new Node(10);
    head->next = new Node(40);
    head->next->next = new Node(90);

    if(search(head,40)){
        cout<<"Yes";
    }
    else cout<< "no";

    if(search(head,10)){
        cout<<"Yes";
    }
    else cout<< "no";
    return 0;
}