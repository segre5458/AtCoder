#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int cnt = 0;
    int N; cin >> N;
    string S; cin >> S;
    for (int i = 0; i < N-2; i++)
    {
        if(S[i] == 'A' && S[i+1] == 'B' && S[i+2] == 'C') cnt++;
    } 
    cout << cnt;
}