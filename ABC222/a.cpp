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
    ll N; cin >> N;
    string S = to_string(N);
    if(N < 10) S = "000"+S;
    else if(N < 100) S = "00"+S;
    else if(N < 1000) S = "0"+S;
    cout << S << endl;
    return 0;
}