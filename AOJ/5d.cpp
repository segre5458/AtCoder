#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
typedef long long ll;
using namespace std;

void call(int n);

int main(){
    int n; cin >> n;
    call(n);
    return 0;
}

void call(int n){
    for(ll i = 1; i <= n; i++){
        if(i % 3 == 0){
            cout << " " << i;
            // break;
        }
        else{
            ll k = i;
            for(ll j = 0; j < 4; j++){
                if(k % 10 == 3){
                    cout << " " << i;
                    break;
                }
                k /= 10;
                if(k == 0) break;
            }
        }
    }
     cout << endl;
     return;
}