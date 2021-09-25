#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
typedef long long ll;
using namespace std;

int main(){
    while(true){
        ll H,W; cin >> H >> W;

        if(H == 0 && W == 0) break;

        for(ll i = 0; i < H; i++){
            for(ll j = 0; j < W; j++){
                if(i == 0 || i == H-1){
                    if(j != W-1) cout << '#';
                    else cout << '#' << endl;
                }

                else{
                    if(j == 0) cout << '#';
                    else if(j == W-1) cout << '#' << endl;
                    else cout << '.';
                }
            }
        }
        cout << endl;
    }
}