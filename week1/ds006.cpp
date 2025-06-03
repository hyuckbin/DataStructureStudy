#include <iostream>
#include <iomanip>

using namespace std;
//한 번 더
const int SIZE = 3;
struct data{
    string title[SIZE] ;
    int grade[SIZE];
    int jumsu[SIZE];

    string gr[SIZE];
    double grjumsu[SIZE];
} g;

void getGrade(){
    for(int i= 0 ; i<SIZE ; i++){
        if(g.jumsu[i] >=95) {g.gr[i] = "A+"; g.grjumsu[i] = 4.5;}
        else if(g.jumsu[i] >=90) {g.gr[i] = "A"; g.grjumsu[i] = 4.0;}
        else if(g.jumsu[i] >=85) {g.gr[i] = "B+"; g.grjumsu[i] = 3.5;}
        else if(g.jumsu[i] >=80) {g.gr[i] = "B"; g.grjumsu[i] = 3.0;}
        else {g.gr[i] ="F" ; g.grjumsu[i] = 0;}
    }
}
void getGpa(){
    int totalcredit=0;
    double gpa =0;
    for(int i= 0 ; i<SIZE ; i++){
        cout << g.title[i] <<"("<< g.grade[i]<<") "<< g.gr[i]<<" " <<fixed<<setprecision(1)<< g.grjumsu[i] <<endl;
        totalcredit += g.grade[i];
        gpa += (g.grade[i] * g.grjumsu[i]);
    }
    gpa = gpa/(double)totalcredit;

    cout <<"Total credits : "<<totalcredit<<", GPA : "<<fixed<<setprecision(2)<< gpa;

}

int main(){
    for(int i=0 ; i<SIZE; i++){
        cin >> g.title[i] >> g.grade[i] >> g.jumsu[i];
    }
    getGrade();
    getGpa();
    return 0;
}   
//복습필요