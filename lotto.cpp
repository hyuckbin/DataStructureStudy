#include <iostream>
#include <time.h>

using namespace std;
//제발제발제발 6/7일 로또번호 나와주세요 ㅠㅠㅠㅠㅠㅠㅠㅠㅠㅠ주여ㅜㅜㅜㅜㅜㅜㅜㅜ
int main(){
    int lucky;

    srand (time(NULL));
    int num[6];
    cout << "1175회 lotto num: ";
    for(int i=0 ; i< 6; i++){
        num[i] =(rand() %44)+1;
        for(int j=0; j<i; j++){
            if(num[i] == num[j]) {
                i--;
                break;
            }
        }
    }
    for(int i=0 ; i< 6; i++){
        cout << num[i] <<" ";
    }

    cout<<endl <<"우우어어어어엉 행운의 퍼센트는~~ "<<endl;
    
    cout << lucky <<" "<< lucky <<" "<< lucky <<" "<< lucky <<" " ;
    return 0;
}