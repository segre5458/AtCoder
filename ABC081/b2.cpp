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

int main() {
    int N; cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];
    int res = 0;
    bool flag = false;
    while(1){
        for(int i=0; i<A.size(); i++){
            if (A[i] % 2 != 0) {
                flag = true;
                break;
            }
            else A[i] /= 2;
        }
        if(flag) break;
        res++;
    }
    cout << res << endl;

    return 0;
}
