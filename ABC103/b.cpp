#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <stack>
#include <cstdlib>
#include <queue>
typedef long long ll;
using namespace std;

int main(){
    string S,T; cin >> S >> T;
    string rotateS;
    for(ll i = 0; i < S.size(); i++){
        rotateS = S.substr(i,S.size()-i) + S.substr(0,i);
        if(rotateS == T){cout << "Yes" << endl; return 0;}
    }
    cout << "No" << endl;
    return 0;
}