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
    string S; cin >> S;
    bool OK = true;
    if(S[0] != 'A') OK = false;

    ll cntC = 0;
    ll cntupper = 0;
    for(ll i = 2; i < S.size()-1; i++){
        if(S[i] == 'C') cntC++;
        else if(isupper(S[i])) cntupper++;
    }
    if(isupper(S[1]) || isupper(S[S.size()-1])) cntupper++;

    if(cntC != 1 || cntupper != 0) OK = false;

    if(OK) cout << "AC" << endl;
    else cout << "WA" << endl;

    return 0;
}