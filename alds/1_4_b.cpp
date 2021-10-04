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

ll A[10000000],n;

ll binarySearch(int key){
    ll left = 0;
    ll right = n;
    ll mid;
    while(left < right){
        mid = (left + right) / 2;
        if(key == A[mid]) return 1;
        if(key > A[mid]) left = mid+1;
        else if(key < A[mid]) right = mid;
    }
    return 0;
}

int main(){
    int i,q,k,sum = 0;
    cin >> n;
    for(ll i = 0; i < n; i++){
        cin >> A[i];
    }
    cin >> q;
    for(ll i = 0; i < q; i++){
        cin >> k;
        if(binarySearch(k)) sum++;
    }
    cout << sum << endl;

    return 0;
}