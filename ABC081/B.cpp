#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    int A[N];
    for(int i=0; i<N; i++) cin >> A[i];
    int cnt = 0;
    for(int j=0; j<1000; j++){
        for(int i=0; i<N; i++){
            if(A[i] % 2 != 0){
                cout << cnt;
                return 0;
            }
            else A[i] /= 2;
            if(i == N-1) cnt+=1;
        }
    }
    cout << cnt;
    return 0;
}