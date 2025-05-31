#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int val) : data(val) , next(nullptr) {}
};

class Stack{
    Node* head;
    int size;

    public:
        Stack(): head(nullptr),size(0){}
       
        void push(int val){
            Node *new_node = new Node(val);
            new_node->next = head;
            head = new_node;
            size++;
        }
        int pop(){
            if(isEmpty()) return -1;

            Node* temp = head;
            int v = temp->data;
            head = head->next;
            delete temp;
            size--;
            
            return v;
        }
        bool isEmpty(){
            return head == nullptr;
        }

        void print() {
        if (isEmpty()) return;
    
        Node* current = head;
        cout << "Stack: ";
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "null" << endl;
}
};

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.print();

    s.pop();
    s.pop();
    
    s.print();

    return 0;
}