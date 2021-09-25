#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool solve(int W,int H,int x,int y,int r);

int main(){
    int W,H,x,y,r; cin >> W >> H >> x >> y >> r;
    bool yes = solve(W,H,x,y,r);
    if(yes) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

bool solve(int W,int H,int x,int y,int r){
    bool judge = true;
    
    if(x - r < 0) judge = false;
    if(y - r < 0) judge = false;
    if(x + r > W) judge = false;
    if(y + r > H) judge = false;

    return judge;
}