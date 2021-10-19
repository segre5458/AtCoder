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

bool solve(char C){
    if(C == 'A' || C == 'C' || C =='G' || C == 'T') return true;
    else return false;
}

int main(){
    string S; cin >> S;
    ll cnt = 0,ans = 0;
    for(ll i = 0; i < S.size(); i++){
        if(solve(S[i])){
            cnt++;
            if(cnt > ans) ans = cnt;
        }
        else cnt = 0; 
    }
    cout << ans << endl;
    
    return 0;
}