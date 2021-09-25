#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    for(int i = 0; i < 30001; i++){
        int a,b; cin >> a >> b;
        if(a == 0 && b == 0) break;
        if(a > b){
            int c = a;
            a = b; b = c;
        }
        cout << a << " " << b << endl;
    }
    return 0;
}