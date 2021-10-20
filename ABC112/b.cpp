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
    ll N,T; cin >> N >> T;
    vector<ll> c(N);
    vector<ll> t(N);
    for(ll i = 0; i < N; i++){
        cin >> c[i] >> t[i];
    }

    ll minc = 10000;

    for(ll i = 0; i < N; i++){
        if(t[i] <= T && c[i] < minc) minc = c[i];
    }
    if(minc == 10000) cout << "TLE" << endl;
    else cout << minc << endl;

    return 0;
}