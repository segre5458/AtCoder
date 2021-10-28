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
    ll H,W,K; cin >> H >> W >> K;
    vector<vector<ll>> c(H,vector<ll>(W));
    for(ll i = 0; i < H; i++){
        for(ll j = 0; j < W; j++){
            cin >> c[i][j];
        }
    }

    ll ans = 0;

    for(ll bit = 0; bit < (1 << H); bit++){
        for(ll i = 0; i < H; i++){
            if(i & (1 << i)){
                for(ll j = 0; j < W; j++){
                    c[i][j] = '.';
                }
            }
        }
    }

    for(ll bit = 0; bit < (1 << W); bit++){
        for(ll i = 0; i < W; i++){
            if(bit & (1 << i)){
                for(ll j = 0; j < H; j++){
                    c[j][i] = '.';
                }
            }
        }
    }
}