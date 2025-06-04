/*
Programming Studio DS009
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int findRoom(int persons[5]); 
void printReport(string mn[10], int mr[10], int mc, string wn[10], int wr[10], int wc);

int main(){
	string mnames[10]; // names of all male students (max. 10)
	string wnames[10]; // names of all female students (max. 10)
	int mroom[10];		// room numbers assigned all male students
	int wroom[10];		// room numbers assigned all female students
	int person[2][5]={0};   // number of persons assgined to all rooms (two floors & each five rooms) 
	int mcount=0, wcount=0; // number of all persons (male, female)
	int menu;

	srand(time(0));
	cout << "===========================================" << endl;
	cout << "생활관 호실 배정 프로그램" << endl;
	cout << "===========================================" << endl;
	while(1){
		cout << "메뉴 : 1.남학생 등록 2.여학생 등록 0.종료 > ";
		cin >> menu;
		if(menu==0) break;
		else if(menu==1) {
			if(mcount>=10) {
				cout << "정원 초과입니다. 등록불가!" << endl;
				continue;
			}
			cout << "학생 이름은? > ";
			cin >> mnames[mcount];
			int roomno = findRoom(person[0]);
			mroom[mcount] = 100+roomno;
			cout <<  mnames[mcount] << " 학생 " << mroom[mcount] << "호실 배정되었습니다." << endl;
			mcount++;
		}
		else if(menu==2) {
			if(wcount>=10) {
				cout << "정원 초과입니다. 등록불가!" << endl;
				continue;
			}
			cout << "학생 이름은? > ";
			cin >> wnames[wcount];
			int roomno = findRoom(person[1]);
			wroom[wcount] = 200+roomno;
			cout <<  wnames[wcount] << " 학생 " << wroom[wcount] << "호실 배정되었습니다." << endl;
			wcount++;
		}
	}

	cout << "===========================================" << endl;
	cout << "생활관 호실 배정 결과는 다음과 같습니다." << endl;
	cout << "===========================================" << endl;
	printReport(mnames, mroom, mcount, wnames, wroom, wcount);

	return 0;
}

int findRoom(int persons[5]){
// 이 곳에 생각 정리와 코드 구현
    int available[5];
    int availcount = 0;
//101 102 103 104 105
    for(int i=0; i<5; i++){
        if(persons[i] <2){
            available[availcount] = i ;
            availcount++;
        }
    }

    if(availcount == 0 ) return -1;

    int randIndex = rand() % availcount;

    int selectroom = available[randIndex];

    persons[selectroom] ++;

    return selectroom + 1;
}

void printReport(string mn[10], int mr[10], int mc, string wn[10], int wr[10], int wc){

    int r[10] = {101,102,103,104,105,201,202,203,204,205}; // 방 호실 저장
    string addR[10] ={}; // 호실별 인원을 추가

    cout << "남학생 명단 (" <<mc << "명)"<<endl;

    for(int i =0 ; i < mc ; i++){
        cout << i+1 <<" . " << mn[i] << " [" <<mr[i] <<"호]"<<endl;
    } 

    cout << endl << "여학생 명단 (" <<wc << "명)"<<endl;

    for(int i =0 ; i < wc ; i++){
        cout << i+1 <<" . " << wn[i] << " [" <<wr[i] <<"호]"<<endl;
    } 

    cout << endl <<"호실별 배정 명단" <<endl;

    //1층은 -101 로 인덱스 0~4 까지
    //2층은 -201 +5 로 인덱스 5~9까지
    for(int i = 0; i < mc; i++){
        int idx = mr[i] - 101; // 101호는 addR[0], 102호는 addR[1] 등등
        addR[idx] += mn[i] + " ";
    }

    
    for(int i = 0; i < wc; i++){
        int idx = wr[i] - 201 + 5; 
        addR[idx] += wn[i] + " ";
    }

    //호실별 출력
    for(int i = 0; i < 10; i++){
        if(addR[i] == ""){
            cout << r[i] << "호 : " <<endl;
        }
        if(addR[i] != ""){
            cout << r[i] << "호 : " << addR[i] << endl;
        }

    }
}