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
    ll H,W; cin >> H >> W;
    vector<vector<ll>> A(H,vector<ll>(W));
    for(ll i = 0; i < H; i++){
        for(ll j = 0; j < W; j++){
            cin >> A[i][j];
        }
    }

    bool OK = true;

    for(ll i = 0; i < H; i++){
        for(ll j = i+1; j < H; j++){
            for(ll k = 0; k < W-1; k++){
                for(ll l = k+1; l < W; l++){
                    if(A[i][k] + A[j][l] > A[i][l] + A[j][k]) OK = false;
                }
            }
        }
    }

    if(OK) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}