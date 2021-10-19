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
    ll X; cin >> X;
    if(X % 100 == 0 && X != 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}