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
    ll N; cin >> N;
    vector<ll> num(N,0);
    for(ll i = 0; i < N-1; i++){
        ll a,b; cin >> a >> b;
        num[a-1]++;
        num[b-1]++;
    }
    for(ll i = 0; i < N; i++){
        if(num[i] == N-1){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" <<endl;

    return 0;
}