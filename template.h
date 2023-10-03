// Created by vuhuydiet

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug/debug.h"
#else
struct __Nothing { template <typename T> __Nothing& operator<<(const T& t) { return *this; } } __nothing;
#define __printArr(...) __nothing
#define __printMat(...) __nothing
#define __print(...) __nothing
#define __println(...) __nothing
#define __db __nothing
#define __ldb __nothing
#define __flag __nothing
#endif
 
#define BEGIN(x) struct x {
#define END(x) };
 
#define int                     long long
#define For(i, begin, end)      for (__typeof(begin) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); (begin) > (end) ? i-- : i++)
#define F                       first
#define S                       second
#define pb                      push_back
#define eb                      emplace_back
#define mp                      make_pair
#define pii                     pair<int, int>
#define vi                      vector<int>
#define vii                     vector<pii>
#define all(a)                  a.begin(), a.end()
#define found(x, y)             (x.find(y) != x.end())
#define nl                      "\n"

using ll = long long;
using ld = long double;
template <typename T> using matrix = vector<vector<T>>;
template <typename T> using max_heap = priority_queue<T>;
template <typename T> using min_heap = priority_queue<T, vector<T>, greater<T>>;
template <typename T> matrix<T> new_mat(int n, int m, const T& val = T()) { return vector<vector<T>>(n, vector<T>(m, val)); }

template <typename T, typename V> bool smax(T& a, const V& b) { a = max(a, b); return a == b; }
template <typename T, typename V> bool smin(T& a, const V& b) { a = min(a, b); return a == b; }

// ----------------------------------- CODE ------------------------------------------ //

const ll INF = (ll)1e18 + 5;
const int MOD = 998244353;
const double ESP = 1e-6;
const int N = 3e5 + 5;


// int f[200'001];
void pre_compute() {
}

BEGIN(Solution)
#define INTERACTIVE 0
#define TESTS 1

int n, m, k, q;


void solve(int _case) {
}

END(Solution)


signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
#if defined(LOCAL) && !INTERACTIVE
    freopen("text/input.txt", "r", stdin);
    freopen("text/output.txt", "w", stdout);
#endif

    pre_compute();
 
    int tc = 1;
#if TESTS
    cin >> tc;
#endif
    for (int i = 1; i <= tc; i++) {
        Solution sol;
        sol.solve(i);
    }

    return 0;
}
