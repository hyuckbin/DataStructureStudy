#include <iostream>
#include <string>

using namespace std;

void count(string s){
    int alphaCount[26] = {0};
    int blankCount = 0;

    for(char ch : s){
        ch = toupper(ch);
        if(isalpha(ch)){
            alphaCount[ch - 'A'] ++;
            
        }
        if(ch==' ') blankCount ++;
    }

    cout << "blanks : " <<blankCount <<endl;

    for(int i=0; i<26; i++){
        if(alphaCount[i]>0){
            cout<<char('A' +i)<<" : "<<alphaCount[i] <<endl;
        }
    }
}

int main(){
    string sentence;
    getline(cin,sentence);

    if(sentence.length() >50){
        cout << "too long(<50)" <<endl;
        return -1;
    }

    count(sentence);


    return 0;
}