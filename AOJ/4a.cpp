#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    int a,b; cin >> a >> b;
    int d,r; double f;

    d = a/b;
    r = a%b;
    f = (double)a/b;

    cout << d << " " << r << " " << fixed << setprecision(5) << f << endl;

    return 0;
}