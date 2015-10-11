//#pragma comment(linker, "/STACK:100000000")
//#define _CRT_DISABLE_PERFCRIT_LOCKS
//#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

//#define DEBUG

#ifdef __APPLE__
#include "stdc++.h"
#else
#include <bits/stdc++.h>
#endif

using namespace std;

/*MACROS*/
//FUNCTIONS
#define in_range(i, l, r) for(int i = l; i < r; i++)
#define repeat(n) for(int I = 0; I < n; I++)
#define all(v) begin(v), end(v)
#define rall(v) v.rbegin(), v.rend()
#define clr(x) memset(x, 0, sizeof x)
#define present(element, container) ((container).find(element) != end(container))
//traverse throught container
#define tr(container, it) for(auto it = begin(container); it != end(container); it++)
#define rtr(container, it) for(auto it = container.rbegin(); it != container.rend(); it++)

//ABBREVIATIONS
#define sz(c) (int(c.size()))
#define pb push_back
#define fst first
#define scd second

//CONSTANTS
#define INF 1000000001
#define EPS (double)1e-8

/*TYPES*/
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/*TEMPLATE ALGORITHMS*/
template<typename T> inline T sqr(T x){T x_ = (x); return x_*x_;}
template<typename T> inline T qbr(T x){T x_ = (x); return x_*x_*x_;}
template<typename T> inline int sign(T x){T x_ = (x); return ((x_>T(0))-(x_<T(0)));}
template<typename T> inline T mod(T x, T m){T x_ = (x); return (((x_) >= 0) ? ((x_) % (m)) : ((((x_) % (m))+(m))%(m)));}
template<typename T> inline T gcd(T a, T b){while(b){T t = a % b; a = b; b = t;} return a;}
template<typename T> inline T gcd_ex(T a, T b, T& x, T& y){if(b==0){x=1,y=0; return a;}T x1, y1;T d=gcd_ex(b,a%b,x1,y1);x = y1;y = x1-(a/b)*y1;return d;}
template<typename T> inline T lcm(T a, T b){return (a*(b/gcd(a, b)));}
template<typename T> inline T binpow(T x, T deg){T res=(T)1; for(;deg;x*=x,deg>>=1)if(deg & 1)res *= x;return res;}
template<typename T> inline T modpow(T x, T deg, T m){assert(deg>=(T)0);T res=(T)(1); for(;deg;x=mod(mod(x, m) *mod(x, m), m),deg>>=1)if(deg&1)res=mod(mod(res, m)*mod(x, m), m);return res;}
template<typename T> inline bool is_between(T POSITION, T LEFT, T RIGHT){return (LEFT < POSITION) && (POSITION < RIGHT);}
template<typename T> inline bool is_inside(T POSITION, T LEFT, T RIGHT){return (LEFT <= POSITION) && (POSITION <= RIGHT);}

/*COMBINATORS*/
template <typename Collection, typename UnaryOperation> void foreach(Collection &col, UnaryOperation op){for_each(all(col), op);}
template <typename Collection, typename UnaryOperation> Collection fmap(Collection &col, UnaryOperation op){transform(all(col), col.begin(), op); return col;}
template <typename Collection, typename binop> Collection zip(Collection& fc, Collection& sc,binop op) {transform(all(fc), sc.begin(), fc.begin(), op);return fc;}
template <typename Collection, typename Condition> bool exists(Collection& col,Condition con) {auto exist = find_if(all(col), con); return exist != col.end();}
template <typename Collection, typename Predicate> Collection filterNot(Collection& col, Predicate predicate) {auto returnIterator = remove_if(all(col), predicate); col.erase(returnIterator, end(col)); return col;}

//STL INPUT
template<class T1, class T2> istream& operator >>(istream& in, pair<T1, T2>& P){in >> P.fst >> P.scd; return in;}
template<class T> istream& operator >>(istream& in, vector<T>& Col){for(auto &el : Col) in >> el; return in;}

//STL OUTPUT
template<class T1, class T2> ostream& operator <<(ostream& os, const pair<T1, T2>& p){os << "(" << p.fst << ", " << p.scd << ")"; return os;}
template<class T> ostream& operator <<(ostream& os, const vector<vector<T>>& v){for(auto &row : v){ for(auto &el : row) os << el << " "; os << "\n";} return os;}
template<class T> ostream& operator <<(ostream& os, const vector<T>& Col){for(auto &el : Col) os << el << " "; return os;}
template<class T> ostream& operator <<(ostream& os, const set<T>& Col){for(auto &el : Col) os << el << " "; return os;}
template<class T1, class T2> ostream& operator <<(ostream& os, const map<T1, T2>& Col){for(auto &el : Col) os << el << " "; return os;}

int main(){
    // ios::sync_with_stdio(false);
    // freopen("in", "r", stdin);
    // freopen("out", "w", stdout);
    
    return 0;
}
