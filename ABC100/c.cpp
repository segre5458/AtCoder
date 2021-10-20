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
    vector<ll> a(N);
    for(ll i = 0; i < N; i++){
        cin >> a[i];
    }

    bool OK = false;
    bool cnt = false;
    ll ans = 0;

    for(ll i = 0; i < 100000000; i++){
        OK = false;
        cnt = false;
        for(ll i = 0; i < N; i++){
            if(a[i] % 2 == 0 && !cnt){
                a[i] /= 2;
                OK = true;
                cnt = true;
            }
            else a[i] *= 3;
        }
        if(OK) ans++;
        else break;
    }

    cout << ans << endl;

    return 0;
}