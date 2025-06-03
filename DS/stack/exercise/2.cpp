//ListStack 연습
#include <iostream>
using namespace std;

struct Node{
    int data ;
    Node * next;

    Node(int val): data(val), next(nullptr){}
};

class Stack{
    Node *head;

    public:
        Stack(): head(nullptr){}
        ~Stack(){
            clear();
        }
        void push(int val){
            Node* nextnode = new Node(val);
        }
        int pop();
        int peek();
        bool isEmpty();
        void clear();
        void display();
};
int main(){
    return 0;
}