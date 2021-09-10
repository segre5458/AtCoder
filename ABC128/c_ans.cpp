#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N,M; cin >> N >> M;
    vector<vector<int>> s(M);
    for(int i = 0; i < M; i++){
        int k; cin >> k;
        for(int j = 0; j < k; j++){
            int a; cin >> a; a--;  //部分集合に対応させるためにa--;を入れる
            s[i].push_back(a);
        }
    }

    vector<int> p(M);
    for(int i = 0; i < M; i++){
        cin >> p[i];
    }

    int cnt = 0;
    for(int bit = 0; bit < (1 << N); bit++){ //全ての電球の付き方のパターンについて探索を行う
        bool ok = true;
        for(int i = 0; i < M; i++){  
            int on = 0;
            for(auto v: s[i]){
                if(bit & (1 << v)) on++;  //onになっている電球の数を求める
            }
            if(on % 2 != p[i]) ok = false;
        }
        if(ok) cnt++;
    }
    cout << cnt << endl;
    return 0;
}