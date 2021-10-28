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
    ll N,M,X; cin >> N >> M >> X;
    vector<ll> C(N);
    vector<vector<ll>> A(N,vector<ll>(M));
    for(ll i = 0; i < N; i++){
        cin >> C[i];
        for(ll j = 0; j < M; j++){
            cin >> A[i][j];
        }
    }
    ll ans = 1000000000;
    bool OK = true;

    for(ll bit = 0; bit < (1 << N); bit++){
        bool OK = true;
        vector<ll> understand(M,0);
        ll sum = 0;
        for(ll i = 0; i < N; i++){
            if(bit & (1 << i)){
                sum += C[i];
                for(ll j = 0; j < M; j++){
                    understand[j] += A[i][j];
                }
            }
        }
        for(ll i = 0; i < M; i++){
            if(understand[i] < X) OK = false;
        }
        if(OK){
            if(sum < ans) ans = sum;
        }
    }

    if(ans == 1000000000) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}