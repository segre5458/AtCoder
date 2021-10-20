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

double temp(ll T,ll H){
    return T-H*0.006;
}

int main(){
    ll N,T,A; cin >> N >> T >> A;
    vector<ll> H(N);
    for(ll i = 0; i < N; i++){
        cin >> H[i];
    }

    ll ans = 0;
    double minT = 100000;

    for(ll i = 0; i < N; i++){
        if(abs((double)A-temp(T,H[i])) < minT){
            minT = abs((double)A-temp(T,H[i]));
            ans = i+1;
        }
    }
    
    cout << ans << endl;

    return 0;
}