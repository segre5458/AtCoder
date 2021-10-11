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
ll N,M;
string A[101];

ll janken(ll round,ll userA,ll userB);

int main(){
    cin >> N >> M;
    for(ll i = 0; i < N*2; i++){
        cin >> A[i];
    }
    vector<ll> order(N*2);
    for(ll i = 0; i < N*2; i++){
        order[i] = i;
    }

    vector<ll> win(N*2,0);

    for(ll round = 0; round < M; round++){
        for(ll i = 0; i < N; i++){
            ll res = janken(round,order[i*2],order[i*2+1]);
            if(0<=res) win[res]++;
        }
        // for(ll i = 0; i < N*2; i++){
        //     cout << win[i];
        // }
        // cout << endl;
        sort(order.begin(),order.end(),[&](ll a, ll b){
            if(win[a] != win[b]) return win[a] > win[b];
            else return a < b;
        });
    }

    for(ll i = 0; i < N*2; i++){
        cout << order[i]+1 << endl;
    }
}

ll janken(ll round,ll userA,ll userB){
    char a = A[userA][round];
    char b = A[userB][round];

    if(a == b) return -1;

    if (a == 'G' && b == 'C') return userA;
    if (a == 'C' && b == 'P') return userA;
    if (a == 'P' && b == 'G') return userA;

    return userB;
}