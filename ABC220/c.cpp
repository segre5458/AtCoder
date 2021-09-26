#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
typedef long long ll;
using namespace std;

int main(){
    ll N; cin >> N;

    vector<ll> A(N);
    ll Asum = 0;
    for(ll i = 0; i < N; i++){
        cin >> A[i];
        Asum += A[i];
    }

    ll X; cin >> X;
    ll B = 0;
    ll C = 0;
    ll num = 0;
    ll j;

    for(ll i = 1; i < N*100; i++){
        B += Asum;
        if(B > X){
            // cout << i << endl;
            // return 0;
            j = i;
            break;
        }
        // num++;
        // if(num == N) num = 0;
    }

    for(ll i = 1; i < N; i++){
        C += A[num];
        if(C > X-B-Asum){
            cout << j*N-i << endl;
            return 0;
        }
        num++;
        if(num == N) num = 0;
    }
    return 0;
}