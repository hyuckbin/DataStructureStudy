#include <iostream>
using namespace std;

int main(){
    string s;
    int count = 0;
    cin >> s ;
    if(s.length() >20 ){
        cout <<" too long!" <<endl;
        return -1;
    }

    for(char ch : s){
        if(ch=='I') count +=1;
        if(ch=='V') count +=5;
        if(ch=='X') count +=10;
        if(ch=='L') count +=50;
        if(ch=='C') count +=100;
        if(ch=='D') count += 500; 
        if(ch=='M') count +=1000;
        
    }

    cout <<"result : " << count;
    return 0;
}