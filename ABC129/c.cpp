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
bool OK = true;

ll solve(ll N){
    if(N == 1) return 1;
    if(N == 2) return 2;

    ll n = solve(N-1) + solve(N-2);

    return n;
}

ll solve2(ll N, ll M, vector<ll> a){
    ll m = 0;
    for(ll i = 0; i < M; i++){
        if(i < M-1 && a[i] == a[i+1]) OK = false;
        m += solve(a[i]) * solve(N - a[i]);
    }

    return m;
}

int main(){
    ll N,M; cin >> N >> M;
    vector<ll> a(M);
    for(ll i = 0; i < M; i++){
        cin >> a[i];
    }

    cout << solve(N) - solve2(N,M,a);

    return 0;
}