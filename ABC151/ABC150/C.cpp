#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int fact(int n){
    int m;
    if(n == 0) return 1;
    m = fact(n-1);
    return n*m;
}

int main() {
    int N; cin >> N;
    vector<int> P(N);
    for(int i=0; i<N; i++) cin >> P[i];
    vector<int> Q(N);
    for(int i=0; i<N; i++) cin >> Q[i];

    int a=0;
    int b=0;
    //a = (P[0]-1)*fact(N-1)+(P[1]-1)*fact(N-2)+...
    for (int i = 0; i < N-1; i++)
    {
        a += (P[i]-1)*fact(N-1-i);
        b += (Q[i]-1)*fact(N-1-i);
    }
    cout << a-b << endl;
    cout << a;
    cout << b;
}