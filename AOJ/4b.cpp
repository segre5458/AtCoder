#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
const double pi = 3.14159265359;

int main(){
    double r; cin >> r;

    double area,cir;
    area = r*r*pi;
    cir = r*2*pi;
    
    cout << fixed << setprecision(6) << area << " " << cir << endl;
}