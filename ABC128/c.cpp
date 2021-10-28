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
    vector<ll> k(M);
    vector<vector<ll>> s(M);
    vector<ll> p(M);
    for(ll i = 0; i < M; i++){
        cin >> k[i];
        for(ll j = 0; j < k[i]; j++){
            ll c; cin >> c; c--; s[i].push_back(c);
        }
    }
    for(ll i = 0; i < M; i++){
        cin >> p[i];
    }

    ll ans = 0;
    for(ll bit = 0; bit < (1 << N); bit++){
        bool OK =true;
        for(ll i = 0; i < M; i++){
            ll on = 0;
            for(auto v: s[i]){
                if(bit & (1 << v)) on++;
            }
            if(on % 2 != p[i]) OK = false;
        }
        if(OK) ans++;
    }

    cout << ans << endl;

    return 0;
}