#include <iostream>
using namespace std;

int main(){
    //날찌 입력받는다
    //1년중 몇번째 날인지 출력한다 how? -> 월별로 몇일인지 나와있으니 더하자
    int month , day;
    cin >>month >>day;
    int monthday[12] ={31,28,31,30,31,30,31,31,30,31,30,31};
    int yearday = 0;
    for(int i=0 ; i<month-1; i++){
        yearday += monthday[i];
    }
    yearday +=day;

    cout << "result : " << yearday;


    return 0;
}