#include <bits/stdc++.h>
using namespace std;

#define BEGIN(x) struct x {
#define END(x) };
 
#define int                     long long
#define For(i, begin, end)      for (__typeof(begin) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); (begin) > (end) ? i-- : i++)
#define F                       first
#define S                       second
#define pb                      push_back
#define mp                      make_pair
#define pii                     pair<int, int>
#define vi                      vector<int>
#define vii                     vector<pii>
#define all(a)                  a.begin(), a.end()
#define found(x, y)             (x.find(y) != x.end())
#define nl                      "\n"

using ll = long long;
using ld = long double;

template <typename T> bool smin(T& a, const T& b) { a = min(a, b); return a == b; }
template <typename T> bool smax(T& a, const T& b) { a = max(a, b); return a == b; }
 
// ------------------------------------------------------------ //

#ifdef LOCAL
#include "debug/debug.h"
#else
struct __Nothing { template <typename T> __Nothing& operator<<(const T& t) { return *this; } } __nothing;
#define __printArr(...) __nothing
#define __print(...) __nothing
#define __println(...) __nothing
#define __db __nothing
#define __ldb __nothing
#define __flag __nothing
#endif
 
// --------------------------- CODE --------------------------- //
const ll INF = (ll)1e18 + 5;
int MOD = 1e9 + 7;
const int mxN = 3e5 + 1;

//int f[1000001] = {0};
void pre_compute() {
    // f[1] = 1;
    // for(int i=2; i<=1000000; i++) {
    //     if (f[i] != 0)
    //         continue;
    //     for(int j=i; j<=1000000; j+=i)
    //         f[j] = i;
    // }
}

BEGIN(Solution)

int n, m, k, q;


#define TESTS
void solve(int testcase) {

}

END(Solution)


signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    pre_compute();
 
    int tc = 1;
#ifdef TESTS
    cin >> tc;
#endif
    for (int i=1; i<= tc; i++) {
        Solution sol;
        sol.solve(i);
    }

    return 0;
}


