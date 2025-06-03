#include <iostream>
#include <iomanip>

using namespace std;

struct st_score{
    int kor,eng,math;
    int total;
    double average;
} s;

void cal(){
    s.total = s.kor+s.eng +s.math;
    s.average = s.total /3.0;
}

string grade(int jumsu){
    if(jumsu>=70) return "PASS";
    else return "Fail";
}
int main(){
    cin >> s.kor >> s.eng >> s.math;
    cal();
    cout << s.total <<" "<<fixed<<setprecision(1)<<s.average<<endl;
    cout << "Korean - " << grade(s.kor)<<endl;
    cout << "E - " << grade(s.eng)<<endl;
    cout << "M - " << grade(s.math)<<endl;

    return 0;
}