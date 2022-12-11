#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
#include <cstdlib>
#include <queue>
#include <set>
typedef long long ll;
using namespace std;

int main() {
    int r,d,x; cin >> r >> d >> x;
    for(int i=0; i<10; i++){
        x = r*x-d;
        cout << x << endl;
    }
    return 0;
}