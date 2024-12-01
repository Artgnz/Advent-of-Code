#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <map>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
typedef vector<ii> vii;
typedef vector<pair<ll,ll>> vpll;
#define deb(x) cerr << #x << " = " << (x) << endl
#define deb2(x, y) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << endl
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define F first
#define S second
#define PB push_back
const int INF = 1e9;
const ll LLINF = 4e18;
const double EPS = 1e-9;

constexpr long long gcd(long long a, long long b) { return a == 0 ? b : gcd(b % a, a); }
constexpr long long lcm(long long a, long long b) { return a * (b / gcd(a, b)); }

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

#ifdef _LocalHost
  clock_t z = clock();
#endif
  vector<int> l1;
  map<int, int> m;
  int a, b;
  while (cin >> a >> b) {
    l1.push_back(a);
    m[b]++;
  }
  ll similarity_score = 0;
  for (const int x : l1) {
    similarity_score += x * m[x];
  }
  cout << similarity_score << endl;
#ifdef _LocalHost
  cerr << "Run time: " << ((double)(clock() - z) / CLOCKS_PER_SEC) << "\n";
#endif
  return 0;
}
