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
    ll D,N;
    cin >> D >> N;
    if(D == 0){
        ll cnt = 0;
        for(ll i = 0; i < 110; i++){
            if(i % 100 != 0) cnt++;
            if(cnt == N){ cout << i << endl; break;}
        }
    }
    else if(D == 1){
        ll cnt = 0;
        for(ll i = 0; i < 100000001; i+=100){
            if(i % 100 == 0 && i % 10000 != 0) cnt++;
            if(cnt == N){cout << i << endl; break;}
        }
    }
    else if(D == 2){
        ll cnt = 0;
        for(ll i = 0; i < 1000000000001; i+=10000){
            if(i % 10000 == 0 && i % 1000000 != 0 && i % 100000000 != 0) cnt++;
            if(cnt == N){cout << i << endl; break;}
        }
    }

    return 0;
}