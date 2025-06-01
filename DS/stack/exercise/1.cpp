#include <iostream>
using namespace std;

class Stack{
    int top, size;
    int* list;

    public:
        Stack(int cap) : top(-1) , size(cap){
            list = new int[cap];
        }
        ~Stack(){
            delete[] list;
        }
        void push(int val){
            if(isFull()) return;

            list[++top] = val;
        }
        int pop(){
            if(isEmpty()) return -1;

            int val = list[top--] ; 
            return val;
        }
        int peek(){
            return list[top];
        }
        bool isEmpty(){
            return top==-1;
        }
        bool isFull(){
            return top == size -1;
        }
        void print(){
            int temp = top;
            while(true){
                if(isEmpty()) return;

                cout << list[temp--] << "->";

                if(temp ==-1) break;
            }
            cout << "null"<<endl;
        }
};
int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    s.print();

    s.pop();
    s.pop();

    s.print();

    s.push(13);
    s.push(14);

    s.print();


    return 0;
}