#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
typedef long long ll;
using namespace std;
#define LEN 100001

struct P{
    char name[100];
    int t;
};

P Q[LEN];
int head,tail,n;

void enqueue(P x){
    Q[tail] = x;
    tail = (tail + 1) % LEN;
}

P dequeue(void){
    P x = Q[head];
    head = (head + 1) % LEN;
    return x;
}

int main(){
    int elaps = 0, c;
    int q;
    P u;
    cin >> n >> q;

    for(ll i = 1; i <= n; i++){
            cin >> Q[i].name;
            cin >> Q[i].t;
    }

    head = 1; tail = n + 1;

    while(head != tail){
        u = dequeue();
        c = min(q,u.t);
        u.t -= c;
        elaps += c;
        if(u.t > 0) enqueue(u);
        else cout << u.name << " " << elaps << endl;
    }

    return 0;
}
