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

string left(string s, ll i){
    for(ll j = 0; j < i; j++){
        char s1 = s[0];
        for(ll i = 0; i < s.size()-1; i++){
        s[i] = s[i+1];
        }
        s[s.size()-1] = s1;
    }
    return s;
}

string right(string s, ll i){
    for(ll j = 0; j < i; j++){
        char s2 = s[s.size()-1];
        for(ll i = s.size()-1; i >= 0; i--){
            s[i+1] = s[i]; 
        }
        s[0] = s2;
    }
    return s;
}

int main(){
    string S; cin >> S;
    string Smax = S,Smin = S;
    // for(ll i = 0; i < S.size(); i++){
    //     for(ll j = 0; j < S.size(); j++){
    //         string T = S;
    //         // string Y = left(T,i);
    //         // string U = right(Y,j);
    //         string Y;
    //         if(i > j) Y = left(T,i-j);
    //         else  Y = right(T,j-i);
    //         string U = Y;
    //         //cout << U << endl;
    //         if(U > Smax) Smax = U;
    //         if(U < Smin) Smin = U;
    //     }
    // }
    for(ll i = 0; i < S.size(); i++){
        if(left(S,i) > Smax) Smax = left(S,i);
        else if(left(S,i) < Smin) Smin = left(S,i);
        else if(right(S,i) > Smax) Smax = right(S,i);
        else if(right(S,i) < Smin) Smin = right(S,i);
    }

    cout << Smin << endl << Smax << endl;

    //cout << right(S,1) << endl;
}