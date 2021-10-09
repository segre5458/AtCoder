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

void janken(char A,char B,ll& cntA,ll& cntB){
    if(A == 'G' && B == 'C') cntA++;
    else if(A == 'C' && B == 'P') cntA++;
    else if(A == 'P' && B == 'G') cntA++;
    else if(A == 'G' && B == 'P') cntB++;
    else if(A == 'C' && B == 'G') cntB++;
    else if(A == 'P' && B == 'C') cntB++;
}

int main(){
    ll N,M,v,w,x; cin >> N >> M;
    vector<string> A(N*2);
    vector<vector<ll>> score(N*2,vector<ll>(N*2,0));
    for(ll i = 0; i < N*2; i++){
        cin >> A[i];
        score[i][0] = i;
    }

    for(ll i = 0; i < M; i++){
        for(ll j = 0; j < N; j++){
            //じゃんけん
            janken(A[score[j*2][0]][i],A[score[j*2+1][0]][i],score[j*2][1],score[j*2+1][1]);
        }
                    
        // for(ll i = 0; i < N*2; i++){
        //     cout << score[i][0]+1 << score[i][1] << endl;
        // }
        // cout << endl;
                    
        //ソート
        for(ll i = 0; i < N*2; i++){
            for(ll k = 1; k < N*2; k++){
                v = score[k][1];
                x = score[k][0];
                w = k-1;
                while(w >= 0 && score[w][1] < v){
                    score[w+1][1] = score[w][1];
                    score[w+1][0] = score[w][0];
                    w--;
                }
                score[w+1][1] = v;
                score[w+1][0] = x;

                if(score[k-1][1] == score[k][1] && score[k-1][0] > score[k][0]){
                ll temp0 = score[k-1][0];
                score[k-1][0] = score[k][0];
                score[k][0] = temp0;
                }
            }
        }
        
    //     for(ll i = 0; i < N*2; i++){
    //         cout << score[i][0]+1 << score[i][1] << endl;
    //     }
    //     cout << endl;
    }

    for(ll i = 0; i < N*2; i++){
        cout << score[i][0]+1 << endl;
    }

    return 0;
}