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
    vector<string> c(H);
    for(ll i = 0; i < H; i++){
        cin >> c[i];
    }

    ll ans = 0;
    
    for(ll bit = 0; bit < (1 << H); bit++){
        for(ll bit2 = 0; bit2 < (1 << W); bit2++){
            ll cnt = 0;
            for(ll i = 0; i < H; i++){
                if(bit & (1 << i)) continue;
                for(ll j = 0; j < W; j++){
                    if(bit2 & (1 << j)) continue;
                    if(c[i][j] == '#') cnt++;
                }
            }
            if(cnt == K) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}