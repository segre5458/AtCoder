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
    cout << fixed << setprecision(12);
    ll N,K; cin >> N >> K;
    double ans = 0,percent = 0;
    for(ll i = 1; i <= N; i++){
        ll j = i;
        percent = 1 / (double)N;
        
        while(j < K){
            percent *= 0.5;
            j *= 2;
        }
        
        ans += percent;
    }

    cout << ans << endl;

    return 0;
}