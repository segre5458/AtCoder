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
    for(ll i = 0; i < N; i++){
        cin >> A[i];
    }

    ll X; cin >> X;
    ll B = 0;
    ll num = 0;

    for(ll i = 1; i < N*100000000000000; i++){
        B += A[num];
        if(B > X){
            cout << i << endl;
            return 0;
        }
        num++;
        if(num == N) num = 0;
    }
    return 0;
}