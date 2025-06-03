    #include <iostream>
    using namespace std;

class Date {
  int year_;
  int month_;  // 1 부터 12 까지.
  int day_;    // 1 부터 31 까지.

 public:
  void SetDate(int year, int month, int date){
    if(year<0){
        cout<<"음수인 년도? 장난해?"<<endl;
        return;
    }
    else year_ = year;

    if(month < 1 || month>12){
        cout << "이상한 월이야"<<endl;
        return;
    }
    else month_ = month;

    if(date<0 || date>31){
        cout<<"이상한 날?"<<endl;
        return;
    }
    else day_ =date;
  }
  void AddDay(int inc){
    int temp = day_;
    int tempMonth = month_;
    temp+=inc;
    if(temp>31){
        tempMonth ++;
        if(tempMonth>12) {
            year_++;
            tempMonth=1;
        }
        inc = inc -(31 - temp);
        day_ = inc;
        month_ = tempMonth;
    }
    else day_ += inc;

  }
  void AddMonth(int inc){
    month_ += inc;

    if(month_ >12){
        month_ -=12;
        year_++;
    }

  }
  void AddYear(int inc){
    year_ += inc;
  }

  void ShowDate(){
    cout << "YEAR/MONTH/DATE : "<< year_<<" "<<month_<<" "<<day_ <<endl;
  }
};
    int main(){
        int year = 2025,month = 6, day =3 ;
        Date d;
        d.SetDate(year,month,day);
        d.ShowDate();

        cout << "add +5 year"<<endl;
        d.AddYear(5);
        d.ShowDate();
        
        cout << "add + 15 month"<<endl;
        d.AddMonth(15);
        d.ShowDate();

        cout <<" add + 20 day" <<endl;
        d.AddDay(20);
        d.ShowDate();

        return 0;
    }