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
    ll N,P; cin >> N >> P;
    ll cnt = 0;
    for(ll i = 0; i < N; i++){
        ll a; cin >> a;
        if(a < P) cnt++;
    }
    cout << cnt << endl;
    return 0;
}