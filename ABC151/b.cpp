#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N,K,M;
    cin >> N >> K >> M;
    vector<int> A(N);
    for (int i = 0; i < N-1; i++) cin >> A[i];
    
    for (int i = 0; i <= K; i++)
    {   
        int sum = 0;
        A[N-1] = i;
        bool can = true;
        for (int j = 0; j < N; j++) sum += A[j];
        int ave = sum/N;

        if(ave >= M){
            cout << A[N-1];
            return 0;
        }
        
        if(A[N-1] == K){
            cout << -1;
            return 0;
        }
    }
    return 0;
}