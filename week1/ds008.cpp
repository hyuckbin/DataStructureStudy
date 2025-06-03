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
    char backch;
    for(char ch : s){
        if(ch=='I') count +=1; 
        if(ch=='V') {
            if(backch=='I'){
                count +=3;
            }
            else count +=5;
        }
        if(ch=='X')  {
            if(backch=='I'){
                count +=8;
            }
            else count +=10;
        }
        if(ch=='L')  {
            if(backch=='X'){
                count +=30;
            }
            else count +=50;
        }
        if(ch=='C') {
            if(backch=='X'){
                count +=80;
            }
            else count +=100;
        }
        if(ch=='D') {
            if(backch=='C'){
                count +=300;
            }
            else count +=500;
        } 
        if(ch=='M')  {
            if(backch=='C'){
                count +=800;
            }
            else count +=1000;
        } 

        backch = ch;
    }

    cout <<"result : " << count;
    return 0;
}