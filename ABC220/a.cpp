#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
typedef long long ll;
using namespace std;

int main(){
    int a,b,c; cin >> a >> b >> c;
    for(int i = a; i <= b; i++){
        if(i % c == 0){
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}