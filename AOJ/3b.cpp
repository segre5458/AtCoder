#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    for(int i = 0; i < 10001; i++){
        int n; cin >> n;
        if(n == 0) break;
        cout << "Case " << i+1 << ": " << n << endl;
    }
    return 0;
}