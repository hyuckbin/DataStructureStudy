#include <iostream>
using namespace std;

int main(){
        string say;
    do{
        cout << "환영한다~" <<endl;;
        cout << " 너는 거짓말을 한적이 있나? ";
        cin >> say;
        if(say == "yes") cout << "지옥행";
        if(say == "no"){
            cout << "pass~"<<endl;
            break;
        }
    }while(true);
    
    return 0;

}