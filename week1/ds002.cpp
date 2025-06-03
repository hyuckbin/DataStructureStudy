#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main(){
    double x1,y1; // first point
    double x2,y2; // second point

    double distance;

    cin >> x1 >> y1 >> x2 >> y2;

    distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    
    cout << "distance : " <<fixed <<setprecision(1) <<distance;

}