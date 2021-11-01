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
    string S = to_string(N);

    ll ans = 0;
    ll min = -1;

    for(int bit=0; bit<(1<<S.size()); bit++){
        ll sum = 0,cnt = 0;
        for(ll i = 0; i < S.size(); i++){
            if(bit & (1 << i)){
                sum += (ll)('0' + S[i]);
                cnt++;
            }
        }
        if(sum!=0 && sum % 3 == 0 && cnt > min){
            min = cnt;
            ans = sum;
        } 
    }
    if(min == -1) cout << min << endl;
    else cout << S.size()-min << endl;

    return 0;
}