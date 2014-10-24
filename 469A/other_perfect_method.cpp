//By acho163
/*
ID: allen.c1
PROG: CFA
LANG: C++
 */
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<cstring>
#include<stack>
#include<queue>
#include<map>
#include<deque>
#include<cmath>
#include<map>

using namespace std;

#define rep(i, n) for(__typeof(n) i = 0; i < (n); i++)
#define pi 3.1415926535897

typedef long long ull;
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<pii, int> edge;

const int maxn = 103;
int n;
bool b[maxn];
int main() {
    cin >> n;
    int p, q;
    cin >> p;
    rep(i, p) {
        int x;
        cin >> x;
        --x;
        b[x] = 1;
    }
    cin >> q;
    rep(i, q) {
        int x;
        cin >> x;
        --x;
        b[x] = 1;
    }
    for (int i = 0; i < n; i++) {
        if (!b[i]) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
}


//+++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++
//By zeitgeist
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <string>
#include <cstdio>
#include <memory.h>
#include <algorithm>
using namespace std;

int a[10002];

int main(){
    //freopen("input.txt", "r", stdin);
    int n, p, q, x;
    cin>> n;

    cin>> p;
    for (int i=1; i<=p; i++){
        cin>> x;
        a[x] = 1;
    }
    cin>> q;
    for (int i=1; i<=q; i++){
        cin>> x;
        a[x] = 1;
    }
    for (int i=1; i<=n; i++)
        if (!a[i]){
            cout<< "Oh, my keyboard!";
            return 0;
        }
    cout<< "I become the guy.";

    return 0;
}
