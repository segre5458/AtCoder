#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> P(N);
    for(int i=0; i<N; i++) cin >> P[i];
    vector<int> Q(N);
    for(int i=0; i<N; i++) cin >> Q[i];

    //順列を生成
    vector<int> a(N);
    for(int i=0; i<N; i++) a[i] = i+1;

    int cntp=0,cntq=0,cnt=1;

    do
    {
        bool p_position = true;
        bool q_position = true;

        for(int i=0; i<N; i++){
            if(P[i] != a[i]) p_position = false;
            if(Q[i] != a[i]) q_position = false;
        }

        if (p_position)
        {
            cntp = cnt;
        }

        if (q_position)
        {
            cntq = cnt;
        }

        cnt++;
    } while (next_permutation(a.begin(),a.end()));

    cout << abs(cntp - cntq) << endl;
    
}