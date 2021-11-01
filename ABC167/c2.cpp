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

    ll cost = 0,ans = 1 << 30;
    bool OK = true;
    vector<ll> und(M,0);

    for(int bit=0; bit < (1 << N); bit++){
        cost = 0;
        OK = true;
        for(ll i = 0; i < M; i++){
            und[i] = 0;
        }
        for(ll i = 0; i < N; i++){
            if(bit & (1 << i)){
                cost += C[i];
                for(ll j = 0; j < M; j++){
                    und[j] += A[i][j];
                }
            }
        }
        for(ll i = 0; i < M; i++){
            if(und[i] < X) OK = false;
        }
        if(OK && cost < ans) ans = cost;
    }

    if(ans == 1 << 30) cout << "-1" << endl;
    else cout << ans << endl;

    return 0;
}