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
    vector<vector<char>> a(H,vector<char>(W));
    for(ll i = 0; i < H; i++){
        for(ll j = 0; j < W; j++){
            cin >> a[i][j];
        }
    }

    vector<bool> OKh(H,false);
    vector<bool> OKw(W,false);

    for(ll i = 0; i < H; i++){
        for(ll j = 0; j < W; j++){
            if(a[i][j] == '#') OKh[i] = true;
        } 
    }

    for(ll i = 0; i < W; i++){
        for(ll j = 0; j < H; j++){
            if(a[j][i] == '#') OKw[i] = true;
        }
    }
    
    for(ll i = 0; i < H; i++){
        if(!OKh[i]) continue;
        for(ll j = 0; j < W; j++){
            if(!OKw[j]) continue;
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}