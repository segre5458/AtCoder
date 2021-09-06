#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    if(N%100 != 0){
        cout << (N/100)+1;
    }
    else cout << N/100;
}