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
    ll N,M; cin >> N >> M;
    vector<vector<ll>> s(M);
    vector<ll> p(M);
    for(ll i = 0; i < M; i++){
        ll k; cin >> k;
        for(ll j = 0; j < k; j++){
            ll a; cin >> a; a--;
            s[i].push_back(a);
        }
    }
    for(ll i = 0; i < M; i++){
        cin >> p[i];
    }

    bool OK = true;
    ll cnt = 0;

    for(ll bit = 0; bit < (1 << N); bit++){
        OK = true;
        for(ll i = 0; i < M; i++){
            ll on = 0;
            for(auto v: s[i]){
                if(bit & (1 << v)) on++;
            }
            if(on % 2 != p[i]) OK = false;
        }
        if(OK) cnt++;
    }
    cout << cnt << endl;

    return 0;
}