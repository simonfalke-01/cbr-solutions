#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> pii;
typedef pair<LL, LL> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<LL> vl;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<vl> vvl;
typedef map<int, int> mii;
typedef map<LL, LL> mll;
typedef set<int> si;
typedef set<LL> sl;
typedef set<char> sc;

double EPS = 1e-9;
int INF = 1000000005;
LL INFF = 1000000000000000005LL;
double PI = acos(-1);
int dirx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };
int diry[8] = { 0, 1, -1, 0, -1, 1, -1, 1 };

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);

#ifdef TESTING
#define DEBUG fprintf(stderr, "====TESTING====\n")
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl
#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
#define DEBUG
#define VALUE(x)
#define debug(...)
#endif

#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define REP(i, n) FOR(i, 0, n)
#define REPN(i, n) FORN(i, 1, n)
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define SQR(x) ((LL)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define SET(a) RESET(a, 0)
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ALL(v) v.begin(), v.end()
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define SORTS(v) sort(ALL(v), sortbysec)
#define REVERSE(v) reverse(ALL(v))
#define ALLA(arr, sz) arr, arr+sz
#define SIZEA(arr) sizeof(arr)/sizeof(arr[0]) 
#define ALLS(arr) ALLA(arr, SIZEA(arr))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse()
#define PERMUTE next_permutation
#define TC(t) while (t--)
#define sp <<' '<<
#define endl '\n'
#define GET(n) cin >> n
#define GETN cin >> N
#define NEXT(n, a) REP(i, n) cin >> a

LL gcd(LL a, LL b ){
    if (b == 0) return a;
    return gcd(b, a%b);
}

LL lcm(LL a, LL b) {
    return a/gcd(a, b)*b;
}

bool prime(LL a) {
    if (a == 1) return 0;
    FORN(i, 2, round(sqrt(a))) if (a%i == 0) return 0;
    return 1;
}

bool sortbysec(const pair<int,int> &a,
               const pair<int,int> &b) {
    return (a.second < b.second);
}

LL N;

int main() {
    fast
    GETN;

    if (N >= 91) cout << "A*";
    else if (N >= 75) cout << "A";
    else if (N >= 60) cout << "B";
    else if (N >= 50) cout << "C";
    else if (N >= 35) cout << "D";
    else if (N >= 20) cout << "E";
    else cout << "U";
}