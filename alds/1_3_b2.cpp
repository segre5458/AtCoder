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
    int n,q,t;
    string name;
    queue<pair<string,int>> Q;
    cin >> n >> q;

    for(ll i = 0; i < n; i++){
        cin >> name >> t;
        Q.push(make_pair(name,t));
    }

    pair<string,int> u;
    int elaps = 0,a;

    while(!Q.empty()){
        u = Q.front(); Q.pop();
        a = min(u.second,q);
        u.second -= a;
        elaps += a;
        if(u.second>0){
            Q.push(u);
        }else{
            cout << u.first << " " << elaps << endl;
        }
    }

    return 0;
}