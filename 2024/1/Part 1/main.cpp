#include <vector>
#include <iostream>

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
  vector<int> l2;
  int a, b;
  while (cin >> a >> b) {
    l1.push_back(a);
    l2.push_back(b);
  }

  sort(l1.begin(),l1.end());
  sort(l2.begin(),l2.end());
  ll total_distance = 0;
  for (int i = 0 ; i < l1.size(); i++) {
    total_distance += abs(l1[i] - l2[i]);
  }
  cout << total_distance;
#ifdef _LocalHost
  cerr << "Run time: " << ((double)(clock() - z) / CLOCKS_PER_SEC) << "\n";
#endif
  return 0;
}
