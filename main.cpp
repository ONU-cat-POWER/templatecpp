//#pragma comment(linker, "/STACK:100000000")
//#define _CRT_DISABLE_PERFCRIT_LOCKS
//#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

//#define DEBUG

#ifdef _APPLE_
    #include <stdc++.h>
#else
    #include <bits/stdc++.h>
#endif

using namespace std;

/*MACROS*/
//FUNCTIONS
#define in_range(i, l, r, step) for(ll i = l; i < r; i += 1LL*step)
#define in_range(i, l, r) for(ll i = l; i < r; i++)

#define all(v) begin(v), end(v)
#define rall(v) (v).rbegin(), (v).rend()

#define tr(it, container) for(auto it = begin(container); it != end(container); it++)
#define rtr(it, container) for(auto it = (container).rbegin(); it != (container).rend(); it++)

#define present(element, container) ((container).find(element) != end(container))

//ABBREVIATIONS
#define sz(c) (ll(c.size()))
#define pb push_back
#define fst first
#define scd second

//TYPE SAFETY
#define sqrt(x) sqrt(1.0*(x))
#define pow(x, n) pow(1.0*(x), n)

//CONSTANTS
#define INF 1011111111
#define LLINF 1000111000111000111LL
#define EPS (double)1e-8

/*TYPES*/
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/*TEMPLATE FUNCTIONS*/
//BIT OPERATIONS
template<typename T> inline T checkbit(T n, T i){T n_ = n; return ((n_ >> i) & T(1));}
template<typename T> inline T bitcount(T n){T n_ = n; return __builtin_popcount(n_); }
template<typename T> inline T isPowerOfTwo(T n){T n_ = n; return (n_ != 0 and ((n_&(n_-1)) == 0)); }

/*TEMPLATE ALGORITHMS*/
template<typename T> inline T sqr(T x){T x_ = (x); return x_*x_;}
template<typename T> inline T qbr(T x){T x_ = (x); return ((x_*x_)*x_);}
template<typename T> inline int sign(T x){T x_ = (x); return ((x_>T(0))-(x_<T(0)));}
template<typename T> inline T mod(T x, T m){T x_ = (x); return (((x_) >= 0) ? ((x_) % (m)) : ((((x_) % (m))+(m))%(m)));}
template<typename T> inline T gcd(T a, T b){while(b){T t = a % b; a = b; b = t;} return a;}
template<typename T> inline T gcd_ex(T a, T b, T& x, T& y){if(b==0){x=1,y=0; return a;}T x1, y1;T d=gcd_ex(b,a%b,x1,y1);x = y1;y = x1-(a/b)*y1;return d;}
template<typename T> inline T lcm(T a, T b){return (a*(b/gcd(a, b)));}
template<typename T> inline T binpow(T x, T deg){T res=(T)1; for(;deg;x*=x,deg>>=1)if(deg & 1)res *= x;return res;}
template<typename T> inline T modpow(T x, T deg, T m){assert(deg>=(T)0);T res=(T)(1); for(;deg;x=mod(mod(x, m) *mod(x, m), m),deg>>=1)if(deg&1)res=mod(mod(res, m)*mod(x, m), m);return res;}

/*COMBINATORS*/
template <typename Collection, typename UnaryOperation> void foreach(Collection &col, UnaryOperation op){for_each(all(col), op);}
template <typename Collection, typename UnaryOperation> Collection fmap(Collection &col, UnaryOperation op){transform(all(col), col.begin(), op); return col;}
template <typename Collection, typename binop> Collection zip(Collection& fc, Collection& sc,binop op) {transform(all(fc), sc.begin(), fc.begin(), op); return fc;}
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

//VARIADIC INPUT
template<typename First> void read(First& t){ cin >> t; }
template<typename First, typename... Args> void read(First& f, Args&... args){ cin >> f; read(forward<Args&>(args)...); }

//VARIADIC OUTPUT
template<typename T> void print(T&& t){ cout << t << endl; }
template<typename First, typename... Args> void print(First&& f, Args&&... args){ cout << f << " "; print(forward<Args&&>(args)...); }
template<typename T> void printLn(T&& t){ cout << t << endl; }
template<typename First, typename... Args> void printLn(First&& f, Args&&... args){ cout << f << endl; printLn(forward<Args&&>(args)...); }

//VARIADIC TYPE DECLARATION
template <typename T, size_t N> struct MakeTensor{ template <typename... Args> static auto make_tensor(size_t first, Args... sizes) -> vector<decltype(MakeTensor<T, N-1>::make_tensor(sizes...))> { auto inner = MakeTensor<T, N-1>::make_tensor(sizes...); return vector<decltype(inner)>(first, inner);} };
template <typename T> struct MakeTensor<T, 1> { static vector<T> make_tensor(size_t size) { return vector<T>(size); }};
template <typename T, typename... Args> auto make_tensor(Args... args) -> decltype(MakeTensor<T, sizeof...(Args)>::make_tensor(args...)){ return MakeTensor<T, sizeof...(Args)>::make_tensor(args...); }

int main(){
//      ios::sync_with_stdio(false);
//     freopen("in", "r", stdin);
//    freopen("out", "w", stdout);
    return 0;
}
