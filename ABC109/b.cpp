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
    vector<string> W(N);
    for(ll i = 0; i < N; i++){
        cin >>W[i];
    }
    
    bool OK = true;

    for(ll i = 0; i < N-1; i++){
        if(W[i][W[i].size()-1] != W[i+1][0]){ OK =  false;}
        for(ll j = i+1; j < N; j++){
            if(W[i] == W[j]) OK = false;
        }
    }

    if(OK) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}