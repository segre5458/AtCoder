#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
#include <cstdlib>
#include <queue>
typedef long long ll;
using namespace std;

int main(){
    ll x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
    ll x3,y3,x4,y4;
    x3 = x2-(y2-y1);
    y3 = y2+(x2-x1);
    x4 = x3-(x2-x1);
    y4 = y3-(y2-y1);

    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;

    return 0;
}