#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N; cin >> N;

    int min; cin >> min;
    int cnt = 1;
    for(int i = 0; i < N-1; i++){
        int P; cin >> P;
        if(P < min){
            cnt++;
            min = P;
        }
    }

    cout << cnt << endl;
    return 0;
}