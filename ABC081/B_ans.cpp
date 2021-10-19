#include <iostream>
using namespace std;

int main(){
    int N; cin >> N;
    int A[N];
    for(int i=0; i<N; i++) cin >> A[i];

    int cnt = 0;

    while(True){
        bool exist_odd = false;
        for(int i=0; i<N; i++){
            if(A[i] % 2 != 0) exist_odd = true;
        }

        if(exist_odd) break;

        for(int j=0; j<N; j++) A[i] /= 2;

        cnt++;
    }
    cout << cnt << endl;
}