#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val): data(val) , next(nullptr) {}
};

class Stack{
    Node* head;

    public :
        Stack() : head(nullptr){}
        ~Stack(){
            clear();
        }
        void push(int val){
            Node* newnode = new Node(val);
            newnode->next = head;
            head = newnode;
        }
        int pop(){
            int a = head -> data;
            Node* temp = head;
            head = head->next;
            delete temp;

            return a;
        }
        int peek(){
            return head->data;
        }
        bool isEmpty(){
            return head == nullptr;
        }
        void display(){
            if(isEmpty()) return;
            Node* curr = head;
            while(true){
                cout << curr->data << "-->";
                curr = curr->next;

                if(curr== nullptr) break;
            }
            cout <<"null" <<endl;

        }
        void clear(){
            while(head!= nullptr){
                Node* temp = head;
                head = head -> next;
                delete temp;
            }
        }
};
int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();
    s.pop();
    
    s.display();

    s.push(20);
    s.push(30);

    s.display();
    return 0;
}