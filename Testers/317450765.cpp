#pragma GCC optimize("Ofast,unroll-loops")

#include <cstdio>
#include <cstring>
#include <cassert>

#include <algorithm>
#include <set>
#include <map>
#include <iomanip>
#include <limits>
#include <iostream>
#include <chrono>
#include <queue>
#include <random>
#include <functional>
#include <vector>
#include <bitset>
#include <ranges>

using namespace std;

#ifdef LOCAL
#include "debug"
#else
#define debug(...)
#endif

using i64 = int64_t;
using u32 = uint32_t;
using u64 = uint64_t;
using usize = size_t;
using f64 = double;
using i128 = __int128_t;
using u128 = __uint128_t;

template <class T>
constexpr T infty = 0;
template <>
constexpr int infty<int> = int(1e9);
template <>
constexpr int64_t infty<int64_t> = int64_t(1e18);
template <>
constexpr __int128_t infty<__int128_t> = __int128_t(1e36);
template <>
constexpr double infty<double> = 1e30;

#define rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define per(i, a, b) for (int i = (a); i >= (b); --i)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define fi first
#define se second

template<class T, class S>
inline bool chmin(T &a, const S &b) {
  return (a > b ? a = b, true : false);
}
template<class T, class S>
inline bool chmax(T &a, const S &b) {
  return (a < b ? a = b, true : false);
}
int xa, ya, xb, yb;
string S, T;
int state[200][200];
void Move(int who, int x, int y, string &S, int msk) {
  state[x][y] |= who;
  for (const char &c : S) {
    const int step = msk % 3 + 1;
    msk /= 3;
    if (c == 'E') {
      rep (_, 1, step) state[++x][y] |= who;
    } else if (c == 'W') {
      rep (_, 1, step) state[--x][y] |= who;
    } else if (c == 'S') {
      rep (_, 1, step) state[x][--y] |= who;
    } else if (c == 'N') {
      rep (_, 1, step) state[x][++y] |= who;
    } else {
      assert(false);
    }
  }
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> xa >> ya >> xb >> yb;
  cin >> S >> T;
  const int N = int(size(S));
  const int M = int(size(T));
  xa += 50;
  ya += 50;
  xb += 50;
  yb += 50;
  int msks = 1;
  rep (i, 1, N) msks *= 3;
  int mskt = 1;
  rep (i, 1, M) mskt *= 3;
  int ANS = 0;
  rep (i, 0, msks - 1) {
    rep (j, 0, mskt - 1) {
      memset(state, 0, sizeof state);
      Move(1, xa, ya, S, i);
      Move(2, xb, yb, T, j);
      int same = 0;
      rep (x, 0, 100) rep (y, 0, 100) if (state[x][y] == 3) same++;
      chmax(ANS, same);
    }
  }
  cout << ANS << '\n';
  return 0;
}