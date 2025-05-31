#include <iostream>
using namespace std;

class Stack{
    int top , capacity;
    int *list;

    public:
        Stack(int size) : top(-1), capacity(size){
            list = new int[size];
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

            int val = list[top--];
            return val;
        }
        int peek(){
            if(isEmpty()) return -1;

            return list[top];
        }
        bool isEmpty(){
            return top==-1;
        }
        bool isFull(){
            return top == capacity-1;
        }
        void print(){
            if(isEmpty()) {
                cout << "underFlow!"<<endl;
                return;
            }
            int i = top;
            while(true){
                cout << list[i--] << "->" ;

                if(i == -1) break;
            }
            cout<<"null" <<endl;
        }
        void clear(){
            cout << "clear!"<<endl;
            top = -1;
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

    s.clear();
    s.print();

    return 0;
}