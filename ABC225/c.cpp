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
    vector<vector<ll>> B(N,vector<ll>(M));
    for(ll i = 0; i < N; i++){
        for(ll j = 0; j < M; j++){
            cin >> B[i][j];
        }
    }

    bool OK = true;

    for(ll i = 0; i < M; i++){
        for(ll j = 0; j < N-1; j++){
            if(B[j][i] + 7 != B[j+1][i]) OK = false;
        }
    }

    for(ll i = 0; i < N; i++){
        for(ll j = 0; j < M-1; j++){
            if(B[i][j] + 1 != B[i][j+1]) OK = false;
            else if(B[i][j] % 7 == 0 && j != M-1) OK = false;
        }
    }

    if(OK) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}