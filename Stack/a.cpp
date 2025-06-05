#include <iostream>
//기본 stack 만들기

/* 미숙한곳
생성자 만들 때 llst 동적할당 
bool 함수 return 할때 = 가 아닌 ==
기본 stack 변수 외우기
print 함수 만들기
*/
using namespace std;

class Stack{
    int top ; 
    int capacity;
    int *list;

    public:
        Stack(int size) : top(-1),capacity(size){
            list = new int(size);
        }
        ~Stack(){
            delete[] list;
        }
        void push(int val){
            if(isFull()) return ;

            list[++top] = val;
        }

        int pop(){
            if(isEmpty()) return -1;

            return list[top--];
        }

        int peek(){
            return list[top];
        }

        bool isFull(){
            return top == capacity -1;
        }

        bool isEmpty(){
            return top==-1;
        }
        void print(){
            if(isEmpty()){
                cout << "empty" << endl;
                return;
            }
            int i= top;
            while(true){
                cout << list[i--] << "-> ";
                
                if(i == -1) break;
            }

            cout<<"null"<<endl;
        }

        void clear(){
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