#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
using ll = long long;
using namespace std;

int main(){
    while (true)
    {
        ll H,W; cin >> H >> W;

        if(H == 0 && W == 0) break;

        for(ll i = 0; i < H; i++){
            for(ll j = 0; j < W; j++){
                if(j != W-1) cout << '#';
                else cout << '#' << endl;
            }
        }
        cout << endl;
    }
    
}