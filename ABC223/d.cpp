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
    ll N,M; cin >> N >> M;
    vector<ll> P(N);
    vector<ll> A(M);
    vector<ll> B(M);
    for(ll i = 0; i < N; i++){
        P[i] = i+1;
    }
    for(ll i = 0; i < M; i++){
        cin >> A[i] >> B[i];
    }

    ll Aposition,Bposition;
    vector<ll>::iterator itrA;
    vector<ll>::iterator itrB;
    vector<ll> ans(N,0);
    do
    {
        bool OK = true;
        for(ll i = 0; i < M; i++){
            ll wantedA = A[i];
            ll wantedB = B[i];
            itrA = find(P.begin(),P.end(),wantedA);
            itrB = find(P.begin(),P.end(),wantedB);
            ll Aposition = distance(P.begin(),itrA);
            ll Bposition = distance(P.begin(),itrB);
            if(Aposition > Bposition) OK = false;
        }
        if(OK){ans = P;break;}
        // for(ll i = 0; i < M; i++){
        //     for(ll j = 0; j < N; j++){
        //         if(A[i] == P[j]) Aposition = j;
        //         if(B[i] == P[j]) Bposition = j;
        //     }
        // if(Aposition > Bposition) OK = false;
        // }
        // if(OK){ ans = P; break;}
    } while (next_permutation(P.begin(),P.end()));
    
    if(ans[0] == 0) cout << -1 << endl;
    else{
        for(ll i = 0; i < N; i++){
            if(i != N-1) cout << ans[i] << " ";
            else cout << ans[i] << endl;
        }
    }
    
    return 0;
}