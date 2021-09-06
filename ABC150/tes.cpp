#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
#define all(v) v.begin(),v.end()


int main(void){
    // Your code here!
    int n;
    cin >> n;
    vector<int> p(n),q(n);
    for (int i = 0;i < n;i++) cin >> p[i];
    for (int i = 0;i < n;i++) cin >> q[i];
    
    //1からnまでの順列を代入
    vector<int> a(n);
    for (int i = 0;i < n;i++) a[i] = i+1;
    
    int cnt = 0;
    int p_position,q_position;
    do {
        bool check1 = true;
        bool check2 = true;
        cnt++;
        
        for (int i = 0;i < n;i++) {
            
            if (p[i] != a[i]) check1 = false;
            
            if (q[i] != a[i]) check2 = false;
        }
        
        //もしaとpの全てが同じだったらその場所を代入
        if (check1) p_position = cnt;
        
        //もしaとpの全てが同じだったらその場所を代入
        if (check2) q_position = cnt;
    } while (next_permutation(all(a)));
    
    cout << abs(p_position - q_position) << endl;
}