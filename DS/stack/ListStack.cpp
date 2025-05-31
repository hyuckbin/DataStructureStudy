#include <iostream>
using namespace std;




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