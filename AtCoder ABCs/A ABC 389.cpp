// #include <stdio.h>
// int main(void){
//     int N;
//     int M;
//     scanf("%dx%d",&N,&M);
//     printf("%d",N*M);
// }






// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using ld = long double;
// using ull = unsigned long long;
// #define endl "\n"
// typedef pair<int, int> Pii;
// #define REP(i, n) for (int i = 0; i < (n); ++i)
// #define REP3(i, m, n) for (int i = (m); (i) < int(n); ++ (i))
// #define rep(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
// #define ALL(x) begin(x), end(x)
// #define rrep(i,a,b) for(int i=a;i>=b;i--)
// #define fore(i,a) for(auto &i:a)
// #define all(s) (s).begin(),(s).end()
// #define drep2(i, m, n) for (int i = (m)-1; i >= (n); --i)
// #define drep(i, n) drep2(i, n, 0)
// #define rever(vec) reverse(vec.begin(), vec.end())
// #define sor(vec) sort(vec.begin(), vec.end())
// #define fi first
// #define FOR_(n) for (ll _ = 0; (_) < (ll)(n); ++(_))
// #define FOR(i, n) for (ll i = 0; (i) < (ll)(n); ++(i))
// #define se second
// #define pb push_back
// #define P pair<ll,ll>
// #define PQminll priority_queue<ll, vector<ll>, greater<ll>>
// #define PQmaxll priority_queue<ll,vector<ll>,less<ll>>
// #define PQminP priority_queue<P, vector<P>, greater<P>>
// #define PQmaxP priority_queue<P,vector<P>,less<P>>
// #define NP next_permutation
// #define die(a) {cout<<a<<endl;return 0;}
// #define dier(a) {return a;}
// //const ll mod = 1000000009;
// ll mod = 998244353;
// //const ll mod = 1000000007;
// const ll inf = 4000000000000000000ll;
// const ld eps = ld(0.00000000001);
// static const long double pi = 3.141592653589793;
// template<class T>void vcin(vector<T> &n){for(int i=0;i<int(n.size());i++) cin>>n[i];}
// template<class T,class K>void vcin(vector<T> &n,vector<K> &m){for(int i=0;i<int(n.size());i++) cin>>n[i]>>m[i];}
// template<class T>void vcout(vector<T> &n){for(int i=0;i<int(n.size());i++){cout<<n[i]<<" ";}cout<<endl;}
// template<class T>void vcin(vector<vector<T>> &n){for(int i=0;i<int(n.size());i++){for(int j=0;j<int(n[i].size());j++){cin>>n[i][j];}}}
// template<class T>void vcout(vector<vector<T>> &n){for(int i=0;i<int(n.size());i++){for(int j=0;j<int(n[i].size());j++){cout<<n[i][j]<<" ";}cout<<endl;}cout<<endl;}
// void yes(bool a){cout<<(a?"yes":"no")<<endl;}
// void YES(bool a){cout<<(a?"YES":"NO")<<endl;}
// void Yes(bool a){cout<<(a?"Yes":"No")<<endl;}
// void possible(bool a){ cout<<(a?"possible":"impossible")<<endl; }
// void Possible(bool a){ cout<<(a?"Possible":"Impossible")<<endl; }
// void POSSIBLE(bool a){ cout<<(a?"POSSIBLE":"IMPOSSIBLE")<<endl; }
// #define FOR_R(i, n) for (ll i = (ll)(n)-1; (i) >= 0; --(i))
// //template<class T>auto min(const T& a){ return *min_element(all(a)); }
// //template<class T>auto max(const T& a){ return *max_element(all(a)); }
// template<class T,class F>void print(pair<T,F> a){cout<<a.fi<<" "<<a.se<<endl;}
// template<class T>bool chmax(T &a,const T b) { if (a<b) { a=b; return 1; } return 0;}
// template<class T>bool chmin(T &a,const T b) { if (b<a) { a=b; return 1; } return 0;}
// template<class T> void ifmin(T t,T u){if(t>u){cout<<-1<<endl;}else{cout<<t<<endl;}}
// template<class T> void ifmax(T t,T u){if(t>u){cout<<-1<<endl;}else{cout<<t<<endl;}}
// ll fastgcd(ll u,ll v){ll shl=0;while(u&&v&&u!=v){bool eu=!(u&1);bool ev=!(v&1);if(eu&&ev){++shl;u>>=1;v>>=1;}else if(eu&&!ev){u>>=1;}else if(!eu&&ev){v>>=1;}else if(u>=v){u=(u-v)>>1;}else{ll tmp=u;u=(v-u)>>1;v=tmp;}}return !u?v<<shl:u<<shl;}
// ll modPow(ll a, ll n, ll mod) { if(mod==1) return 0;ll ret = 1; ll p = a % mod; while (n) { if (n & 1) ret = ret * p % mod; p = p * p % mod; n >>= 1; } return ret; }
// vector<ll> divisor(ll x){ vector<ll> ans; for(ll i = 1; i * i <= x; i++){ if(x % i == 0) {ans.push_back(i); if(i*i!=x){ ans.push_back(x / ans[i]);}}}sor(ans); return ans; }
// ll pop(ll x){return __builtin_popcountll(x);}
// ll poplong(ll x){ll y=-1;while(x){x/=2;y++;}return y;}
// P hyou(P a){ll x=fastgcd(abs(a.fi),abs(a.se));a.fi/=x;a.se/=x;if(a.se<0){a.fi*=-1;a.se*=-1;}return a;}
// P Pplus(P a,P b){ return hyou({a.fi*b.se+b.fi*a.se,a.se*b.se});}
// P Ptimes(P a,ll b){ return hyou({a.fi*b,a.se});}
// P Ptimes(P a,P b){ return hyou({a.fi*b.fi,a.se*b.se});}
// P Pminus(P a,P b){ return hyou({a.fi*b.se-b.fi*a.se,a.se*b.se});}
// P Pgyaku(P a){ return hyou({a.se,a.fi});}
 
// void cincout(){
//   ios::sync_with_stdio(false);
//     std::cin.tie(nullptr);
//   cout<< fixed << setprecision(15);
// }

// int main(){
//   cincout();
//   string s;
//   cin>>s;
//   cout<<(s[0]-'0')*(s[2]-'0')<<endl;
// }







// #include <bits/stdc++.h>
// using namespace std;
// using ll=long long;
// using ld=long double;
// const ll ILL=2167167167167167167;
// const int INF=2100000000;
// #define rep(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
// #define all(p) p.begin(),p.end()
// template<class T> using _pq = priority_queue<T, vector<T>, greater<T>>;
// template<class T> int LB(vector<T> &v,T a){return lower_bound(v.begin(),v.end(),a)-v.begin();}
// template<class T> int UB(vector<T> &v,T a){return upper_bound(v.begin(),v.end(),a)-v.begin();}
// template<class T> bool chmin(T &a,T b){if(b<a){a=b;return 1;}else return 0;}
// template<class T> bool chmax(T &a,T b){if(a<b){a=b;return 1;}else return 0;}
// template<class T> void So(vector<T> &v) {sort(v.begin(),v.end());}
// template<class T> void Sore(vector<T> &v) {sort(v.begin(),v.end(),[](T x,T y){return x>y;});}
// bool yneos(bool a,bool upp=false){if(a){cout<<(upp?"YES\n":"Yes\n");}else{cout<<(upp?"NO\n":"No\n");}return a;}
// template<class T> void vec_out(vector<T> &p,int ty=0){
//     if(ty==2){cout<<'{';for(int i=0;i<(int)p.size();i++){if(i){cout<<",";}cout<<'"'<<p[i]<<'"';}cout<<"}\n";}
//     else{if(ty==1){cout<<p.size()<<"\n";}for(int i=0;i<(int)(p.size());i++){if(i) cout<<" ";cout<<p[i];}cout<<"\n";}}
// template<class T> T vec_min(vector<T> &a){assert(!a.empty());T ans=a[0];for(auto &x:a) chmin(ans,x);return ans;}
// template<class T> T vec_max(vector<T> &a){assert(!a.empty());T ans=a[0];for(auto &x:a) chmax(ans,x);return ans;}
// template<class T> T vec_sum(vector<T> &a){T ans=T(0);for(auto &x:a) ans+=x;return ans;}
// int pop_count(long long a){int res=0;while(a){res+=(a&1),a>>=1;}return res;}






// void solve();
// // CITRUS CURIO CITY / FREDERIC
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t = 1;
//     // cin >> t;
//     rep(i, 0, t) solve();
// }

// void solve(){
//     string S;
//     cin >> S;
//     cout << (S[0] - '0') * (S[2] - '0') << "\n";
// }






// print(eval(input().replace("x", "*")))






// maspy's code
// #line 1 "library/my_template.hpp"
// #if defined(LOCAL)
// #include <my_template_compiled.hpp>
// #else

// // https://codeforces.com/blog/entry/96344
// #pragma GCC optimize("Ofast,unroll-loops")
// // いまの CF だとこれ入れると動かない？
// // #pragma GCC target("avx2,popcnt")

// #include <bits/stdc++.h>

// using namespace std;

// using ll = long long;
// using u8 = uint8_t;
// using u16 = uint16_t;
// using u32 = uint32_t;
// using u64 = uint64_t;
// using i128 = __int128;
// using u128 = unsigned __int128;
// using f128 = __float128;

// template <class T>
// constexpr T infty = 0;
// template <>
// constexpr int infty<int> = 1'010'000'000;
// template <>
// constexpr ll infty<ll> = 2'020'000'000'000'000'000;
// template <>
// constexpr u32 infty<u32> = infty<int>;
// template <>
// constexpr u64 infty<u64> = infty<ll>;
// template <>
// constexpr i128 infty<i128> = i128(infty<ll>) * 2'000'000'000'000'000'000;
// template <>
// constexpr double infty<double> = infty<ll>;
// template <>
// constexpr long double infty<long double> = infty<ll>;

// using pi = pair<ll, ll>;
// using vi = vector<ll>;
// template <class T>
// using vc = vector<T>;
// template <class T>
// using vvc = vector<vc<T>>;
// template <class T>
// using vvvc = vector<vvc<T>>;
// template <class T>
// using vvvvc = vector<vvvc<T>>;
// template <class T>
// using vvvvvc = vector<vvvvc<T>>;
// template <class T>
// using pq = priority_queue<T>;
// template <class T>
// using pqg = priority_queue<T, vector<T>, greater<T>>;

// #define vv(type, name, h, ...) vector<vector<type>> name(h, vector<type>(__VA_ARGS__))
// #define vvv(type, name, h, w, ...) vector<vector<vector<type>>> name(h, vector<vector<type>>(w, vector<type>(__VA_ARGS__)))
// #define vvvv(type, name, a, b, c, ...) \
//   vector<vector<vector<vector<type>>>> name(a, vector<vector<vector<type>>>(b, vector<vector<type>>(c, vector<type>(__VA_ARGS__))))

// // https://trap.jp/post/1224/
// #define FOR1(a) for (ll _ = 0; _ < ll(a); ++_)
// #define FOR2(i, a) for (ll i = 0; i < ll(a); ++i)
// #define FOR3(i, a, b) for (ll i = a; i < ll(b); ++i)
// #define FOR4(i, a, b, c) for (ll i = a; i < ll(b); i += (c))
// #define FOR1_R(a) for (ll i = (a)-1; i >= ll(0); --i)
// #define FOR2_R(i, a) for (ll i = (a)-1; i >= ll(0); --i)
// #define FOR3_R(i, a, b) for (ll i = (b)-1; i >= ll(a); --i)
// #define overload4(a, b, c, d, e, ...) e
// #define overload3(a, b, c, d, ...) d
// #define FOR(...) overload4(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)
// #define FOR_R(...) overload3(__VA_ARGS__, FOR3_R, FOR2_R, FOR1_R)(__VA_ARGS__)

// #define all(x) x.begin(), x.end()
// #define len(x) ll(x.size())
// #define elif else if

// #define eb emplace_back
// #define mp make_pair
// #define mt make_tuple
// #define fi first
// #define se second

// #define stoi stoll

// int popcnt(int x) { return __builtin_popcount(x); }
// int popcnt(u32 x) { return __builtin_popcount(x); }
// int popcnt(ll x) { return __builtin_popcountll(x); }
// int popcnt(u64 x) { return __builtin_popcountll(x); }
// int popcnt_sgn(int x) { return (__builtin_parity(unsigned(x)) & 1 ? -1 : 1); }
// int popcnt_sgn(u32 x) { return (__builtin_parity(x) & 1 ? -1 : 1); }
// int popcnt_sgn(ll x) { return (__builtin_parityll(x) & 1 ? -1 : 1); }
// int popcnt_sgn(u64 x) { return (__builtin_parityll(x) & 1 ? -1 : 1); }
// // (0, 1, 2, 3, 4) -> (-1, 0, 1, 1, 2)
// int topbit(int x) { return (x == 0 ? -1 : 31 - __builtin_clz(x)); }
// int topbit(u32 x) { return (x == 0 ? -1 : 31 - __builtin_clz(x)); }
// int topbit(ll x) { return (x == 0 ? -1 : 63 - __builtin_clzll(x)); }
// int topbit(u64 x) { return (x == 0 ? -1 : 63 - __builtin_clzll(x)); }
// // (0, 1, 2, 3, 4) -> (-1, 0, 1, 0, 2)
// int lowbit(int x) { return (x == 0 ? -1 : __builtin_ctz(x)); }
// int lowbit(u32 x) { return (x == 0 ? -1 : __builtin_ctz(x)); }
// int lowbit(ll x) { return (x == 0 ? -1 : __builtin_ctzll(x)); }
// int lowbit(u64 x) { return (x == 0 ? -1 : __builtin_ctzll(x)); }

// template <typename T>
// T kth_bit(int k) {
//   return T(1) << k;
// }
// template <typename T>
// bool has_kth_bit(T x, int k) {
//   return x >> k & 1;
// }

// template <typename UINT>
// struct all_bit {
//   struct iter {
//     UINT s;
//     iter(UINT s) : s(s) {}
//     int operator*() const { return lowbit(s); }
//     iter &operator++() {
//       s &= s - 1;
//       return *this;
//     }
//     bool operator!=(const iter) const { return s != 0; }
//   };
//   UINT s;
//   all_bit(UINT s) : s(s) {}
//   iter begin() const { return iter(s); }
//   iter end() const { return iter(0); }
// };

// template <typename UINT>
// struct all_subset {
//   static_assert(is_unsigned<UINT>::value);
//   struct iter {
//     UINT s, t;
//     bool ed;
//     iter(UINT s) : s(s), t(s), ed(0) {}
//     int operator*() const { return s ^ t; }
//     iter &operator++() {
//       (t == 0 ? ed = 1 : t = (t - 1) & s);
//       return *this;
//     }
//     bool operator!=(const iter) const { return !ed; }
//   };
//   UINT s;
//   all_subset(UINT s) : s(s) {}
//   iter begin() const { return iter(s); }
//   iter end() const { return iter(0); }
// };

// template <typename T>
// T floor(T a, T b) {
//   return a / b - (a % b && (a ^ b) < 0);
// }
// template <typename T>
// T ceil(T x, T y) {
//   return floor(x + y - 1, y);
// }
// template <typename T>
// T bmod(T x, T y) {
//   return x - y * floor(x, y);
// }
// template <typename T>
// pair<T, T> divmod(T x, T y) {
//   T q = floor(x, y);
//   return {q, x - q * y};
// }

// template <typename T, typename U>
// T SUM(const vector<U> &A) {
//   T sm = 0;
//   for (auto &&a: A) sm += a;
//   return sm;
// }

// #define MIN(v) *min_element(all(v))
// #define MAX(v) *max_element(all(v))
// #define LB(c, x) distance((c).begin(), lower_bound(all(c), (x)))
// #define UB(c, x) distance((c).begin(), upper_bound(all(c), (x)))
// #define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()

// template <typename T>
// T POP(deque<T> &que) {
//   T a = que.front();
//   que.pop_front();
//   return a;
// }
// template <typename T>
// T POP(pq<T> &que) {
//   T a = que.top();
//   que.pop();
//   return a;
// }
// template <typename T>
// T POP(pqg<T> &que) {
//   T a = que.top();
//   que.pop();
//   return a;
// }
// template <typename T>
// T POP(vc<T> &que) {
//   T a = que.back();
//   que.pop_back();
//   return a;
// }

// template <typename F>
// ll binary_search(F check, ll ok, ll ng, bool check_ok = true) {
//   if (check_ok) assert(check(ok));
//   while (abs(ok - ng) > 1) {
//     auto x = (ng + ok) / 2;
//     (check(x) ? ok : ng) = x;
//   }
//   return ok;
// }
// template <typename F>
// double binary_search_real(F check, double ok, double ng, int iter = 100) {
//   FOR(iter) {
//     double x = (ok + ng) / 2;
//     (check(x) ? ok : ng) = x;
//   }
//   return (ok + ng) / 2;
// }

// template <class T, class S>
// inline bool chmax(T &a, const S &b) {
//   return (a < b ? a = b, 1 : 0);
// }
// template <class T, class S>
// inline bool chmin(T &a, const S &b) {
//   return (a > b ? a = b, 1 : 0);
// }

// // ? は -1
// vc<int> s_to_vi(const string &S, char first_char) {
//   vc<int> A(S.size());
//   FOR(i, S.size()) { A[i] = (S[i] != '?' ? S[i] - first_char : -1); }
//   return A;
// }

// template <typename T, typename U>
// vector<T> cumsum(vector<U> &A, int off = 1) {
//   int N = A.size();
//   vector<T> B(N + 1);
//   FOR(i, N) { B[i + 1] = B[i] + A[i]; }
//   if (off == 0) B.erase(B.begin());
//   return B;
// }

// // stable sort
// template <typename T>
// vector<int> argsort(const vector<T> &A) {
//   vector<int> ids(len(A));
//   iota(all(ids), 0);
//   sort(all(ids), [&](int i, int j) { return (A[i] == A[j] ? i < j : A[i] < A[j]); });
//   return ids;
// }

// // A[I[0]], A[I[1]], ...
// template <typename T>
// vc<T> rearrange(const vc<T> &A, const vc<int> &I) {
//   vc<T> B(len(I));
//   FOR(i, len(I)) B[i] = A[I[i]];
//   return B;
// }

// template <typename T, typename... Vectors>
// void concat(vc<T> &first, const Vectors &... others) {
//   vc<T> &res = first;
//   (res.insert(res.end(), others.begin(), others.end()), ...);
// }
// #endif
// #line 1 "library/other/io.hpp"
// #define FASTIO
// #include <unistd.h>

// // https://judge.yosupo.jp/submission/21623
// namespace fastio {
// static constexpr uint32_t SZ = 1 << 17;
// char ibuf[SZ];
// char obuf[SZ];
// char out[100];
// // pointer of ibuf, obuf
// uint32_t pil = 0, pir = 0, por = 0;

// struct Pre {
//   char num[10000][4];
//   constexpr Pre() : num() {
//     for (int i = 0; i < 10000; i++) {
//       int n = i;
//       for (int j = 3; j >= 0; j--) {
//         num[i][j] = n % 10 | '0';
//         n /= 10;
//       }
//     }
//   }
// } constexpr pre;

// inline void load() {
//   memcpy(ibuf, ibuf + pil, pir - pil);
//   pir = pir - pil + fread(ibuf + pir - pil, 1, SZ - pir + pil, stdin);
//   pil = 0;
//   if (pir < SZ) ibuf[pir++] = '\n';
// }

// inline void flush() {
//   fwrite(obuf, 1, por, stdout);
//   por = 0;
// }

// void rd(char &c) {
//   do {
//     if (pil + 1 > pir) load();
//     c = ibuf[pil++];
//   } while (isspace(c));
// }

// void rd(string &x) {
//   x.clear();
//   char c;
//   do {
//     if (pil + 1 > pir) load();
//     c = ibuf[pil++];
//   } while (isspace(c));
//   do {
//     x += c;
//     if (pil == pir) load();
//     c = ibuf[pil++];
//   } while (!isspace(c));
// }

// template <typename T>
// void rd_real(T &x) {
//   string s;
//   rd(s);
//   x = stod(s);
// }

// template <typename T>
// void rd_integer(T &x) {
//   if (pil + 100 > pir) load();
//   char c;
//   do
//     c = ibuf[pil++];
//   while (c < '-');
//   bool minus = 0;
//   if constexpr (is_signed<T>::value || is_same_v<T, i128>) {
//     if (c == '-') { minus = 1, c = ibuf[pil++]; }
//   }
//   x = 0;
//   while ('0' <= c) { x = x * 10 + (c & 15), c = ibuf[pil++]; }
//   if constexpr (is_signed<T>::value || is_same_v<T, i128>) {
//     if (minus) x = -x;
//   }
// }

// void rd(int &x) { rd_integer(x); }
// void rd(ll &x) { rd_integer(x); }
// void rd(i128 &x) { rd_integer(x); }
// void rd(u32 &x) { rd_integer(x); }
// void rd(u64 &x) { rd_integer(x); }
// void rd(u128 &x) { rd_integer(x); }
// void rd(double &x) { rd_real(x); }
// void rd(long double &x) { rd_real(x); }
// void rd(f128 &x) { rd_real(x); }

// template <class T, class U>
// void rd(pair<T, U> &p) {
//   return rd(p.first), rd(p.second);
// }
// template <size_t N = 0, typename T>
// void rd_tuple(T &t) {
//   if constexpr (N < std::tuple_size<T>::value) {
//     auto &x = std::get<N>(t);
//     rd(x);
//     rd_tuple<N + 1>(t);
//   }
// }
// template <class... T>
// void rd(tuple<T...> &tpl) {
//   rd_tuple(tpl);
// }

// template <size_t N = 0, typename T>
// void rd(array<T, N> &x) {
//   for (auto &d: x) rd(d);
// }
// template <class T>
// void rd(vc<T> &x) {
//   for (auto &d: x) rd(d);
// }

// void read() {}
// template <class H, class... T>
// void read(H &h, T &... t) {
//   rd(h), read(t...);
// }

// void wt(const char c) {
//   if (por == SZ) flush();
//   obuf[por++] = c;
// }
// void wt(const string s) {
//   for (char c: s) wt(c);
// }
// void wt(const char *s) {
//   size_t len = strlen(s);
//   for (size_t i = 0; i < len; i++) wt(s[i]);
// }

// template <typename T>
// void wt_integer(T x) {
//   if (por > SZ - 100) flush();
//   if (x < 0) { obuf[por++] = '-', x = -x; }
//   int outi;
//   for (outi = 96; x >= 10000; outi -= 4) {
//     memcpy(out + outi, pre.num[x % 10000], 4);
//     x /= 10000;
//   }
//   if (x >= 1000) {
//     memcpy(obuf + por, pre.num[x], 4);
//     por += 4;
//   } else if (x >= 100) {
//     memcpy(obuf + por, pre.num[x] + 1, 3);
//     por += 3;
//   } else if (x >= 10) {
//     int q = (x * 103) >> 10;
//     obuf[por] = q | '0';
//     obuf[por + 1] = (x - q * 10) | '0';
//     por += 2;
//   } else
//     obuf[por++] = x | '0';
//   memcpy(obuf + por, out + outi + 4, 96 - outi);
//   por += 96 - outi;
// }

// template <typename T>
// void wt_real(T x) {
//   ostringstream oss;
//   oss << fixed << setprecision(15) << double(x);
//   string s = oss.str();
//   wt(s);
// }

// void wt(int x) { wt_integer(x); }
// void wt(ll x) { wt_integer(x); }
// void wt(i128 x) { wt_integer(x); }
// void wt(u32 x) { wt_integer(x); }
// void wt(u64 x) { wt_integer(x); }
// void wt(u128 x) { wt_integer(x); }
// void wt(double x) { wt_real(x); }
// void wt(long double x) { wt_real(x); }
// void wt(f128 x) { wt_real(x); }

// template <class T, class U>
// void wt(const pair<T, U> val) {
//   wt(val.first);
//   wt(' ');
//   wt(val.second);
// }
// template <size_t N = 0, typename T>
// void wt_tuple(const T t) {
//   if constexpr (N < std::tuple_size<T>::value) {
//     if constexpr (N > 0) { wt(' '); }
//     const auto x = std::get<N>(t);
//     wt(x);
//     wt_tuple<N + 1>(t);
//   }
// }
// template <class... T>
// void wt(tuple<T...> tpl) {
//   wt_tuple(tpl);
// }
// template <class T, size_t S>
// void wt(const array<T, S> val) {
//   auto n = val.size();
//   for (size_t i = 0; i < n; i++) {
//     if (i) wt(' ');
//     wt(val[i]);
//   }
// }
// template <class T>
// void wt(const vector<T> val) {
//   auto n = val.size();
//   for (size_t i = 0; i < n; i++) {
//     if (i) wt(' ');
//     wt(val[i]);
//   }
// }

// void print() { wt('\n'); }
// template <class Head, class... Tail>
// void print(Head &&head, Tail &&... tail) {
//   wt(head);
//   if (sizeof...(Tail)) wt(' ');
//   print(forward<Tail>(tail)...);
// }

// // gcc expansion. called automaticall after main.
// void __attribute__((destructor)) _d() { flush(); }
// } // namespace fastio
// using fastio::read;
// using fastio::print;
// using fastio::flush;

// #if defined(LOCAL)
// #define SHOW(...) SHOW_IMPL(__VA_ARGS__, SHOW6, SHOW5, SHOW4, SHOW3, SHOW2, SHOW1)(__VA_ARGS__)
// #define SHOW_IMPL(_1, _2, _3, _4, _5, _6, NAME, ...) NAME
// #define SHOW1(x) print(#x, "=", (x)), flush()
// #define SHOW2(x, y) print(#x, "=", (x), #y, "=", (y)), flush()
// #define SHOW3(x, y, z) print(#x, "=", (x), #y, "=", (y), #z, "=", (z)), flush()
// #define SHOW4(x, y, z, w) print(#x, "=", (x), #y, "=", (y), #z, "=", (z), #w, "=", (w)), flush()
// #define SHOW5(x, y, z, w, v) print(#x, "=", (x), #y, "=", (y), #z, "=", (z), #w, "=", (w), #v, "=", (v)), flush()
// #define SHOW6(x, y, z, w, v, u) print(#x, "=", (x), #y, "=", (y), #z, "=", (z), #w, "=", (w), #v, "=", (v), #u, "=", (u)), flush()
// #else
// #define SHOW(...)
// #endif

// #define INT(...)   \
//   int __VA_ARGS__; \
//   read(__VA_ARGS__)
// #define LL(...)   \
//   ll __VA_ARGS__; \
//   read(__VA_ARGS__)
// #define U32(...)   \
//   u32 __VA_ARGS__; \
//   read(__VA_ARGS__)
// #define U64(...)   \
//   u64 __VA_ARGS__; \
//   read(__VA_ARGS__)
// #define STR(...)      \
//   string __VA_ARGS__; \
//   read(__VA_ARGS__)
// #define CHAR(...)   \
//   char __VA_ARGS__; \
//   read(__VA_ARGS__)
// #define DBL(...)      \
//   double __VA_ARGS__; \
//   read(__VA_ARGS__)

// #define VEC(type, name, size) \
//   vector<type> name(size);    \
//   read(name)
// #define VV(type, name, h, w)                     \
//   vector<vector<type>> name(h, vector<type>(w)); \
//   read(name)

// void YES(bool t = 1) { print(t ? "YES" : "NO"); }
// void NO(bool t = 1) { YES(!t); }
// void Yes(bool t = 1) { print(t ? "Yes" : "No"); }
// void No(bool t = 1) { Yes(!t); }
// void yes(bool t = 1) { print(t ? "yes" : "no"); }
// void no(bool t = 1) { yes(!t); }
// void YA(bool t = 1) { print(t ? "YA" : "TIDAK"); }
// void TIDAK(bool t = 1) { YES(!t); }
// #line 3 "main.cpp"

// #line 2 "library/mod/modint_common.hpp"

// struct has_mod_impl {
//   template <class T>
//   static auto check(T &&x) -> decltype(x.get_mod(), std::true_type{});
//   template <class T>
//   static auto check(...) -> std::false_type;
// };

// template <class T>
// class has_mod : public decltype(has_mod_impl::check<T>(std::declval<T>())) {};

// template <typename mint>
// mint inv(int n) {
//   static const int mod = mint::get_mod();
//   static vector<mint> dat = {0, 1};
//   assert(0 <= n);
//   if (n >= mod) n %= mod;
//   while (len(dat) <= n) {
//     int k = len(dat);
//     int q = (mod + k - 1) / k;
//     dat.eb(dat[k * q - mod] * mint::raw(q));
//   }
//   return dat[n];
// }

// template <typename mint>
// mint fact(int n) {
//   static const int mod = mint::get_mod();
//   assert(0 <= n && n < mod);
//   static vector<mint> dat = {1, 1};
//   while (len(dat) <= n) dat.eb(dat[len(dat) - 1] * mint::raw(len(dat)));
//   return dat[n];
// }

// template <typename mint>
// mint fact_inv(int n) {
//   static vector<mint> dat = {1, 1};
//   if (n < 0) return mint(0);
//   while (len(dat) <= n) dat.eb(dat[len(dat) - 1] * inv<mint>(len(dat)));
//   return dat[n];
// }

// template <class mint, class... Ts>
// mint fact_invs(Ts... xs) {
//   return (mint(1) * ... * fact_inv<mint>(xs));
// }

// template <typename mint, class Head, class... Tail>
// mint multinomial(Head &&head, Tail &&... tail) {
//   return fact<mint>(head) * fact_invs<mint>(std::forward<Tail>(tail)...);
// }

// template <typename mint>
// mint C_dense(int n, int k) {
//   assert(n >= 0);
//   if (k < 0 || n < k) return 0;
//   static vvc<mint> C;
//   static int H = 0, W = 0;
//   auto calc = [&](int i, int j) -> mint {
//     if (i == 0) return (j == 0 ? mint(1) : mint(0));
//     return C[i - 1][j] + (j ? C[i - 1][j - 1] : 0);
//   };
//   if (W <= k) {
//     FOR(i, H) {
//       C[i].resize(k + 1);
//       FOR(j, W, k + 1) { C[i][j] = calc(i, j); }
//     }
//     W = k + 1;
//   }
//   if (H <= n) {
//     C.resize(n + 1);
//     FOR(i, H, n + 1) {
//       C[i].resize(W);
//       FOR(j, W) { C[i][j] = calc(i, j); }
//     }
//     H = n + 1;
//   }
//   return C[n][k];
// }

// template <typename mint, bool large = false, bool dense = false>
// mint C(ll n, ll k) {
//   assert(n >= 0);
//   if (k < 0 || n < k) return 0;
//   if constexpr (dense) return C_dense<mint>(n, k);
//   if constexpr (!large) return multinomial<mint>(n, k, n - k);
//   k = min(k, n - k);
//   mint x(1);
//   FOR(i, k) x *= mint(n - i);
//   return x * fact_inv<mint>(k);
// }

// template <typename mint, bool large = false>
// mint C_inv(ll n, ll k) {
//   assert(n >= 0);
//   assert(0 <= k && k <= n);
//   if (!large) return fact_inv<mint>(n) * fact<mint>(k) * fact<mint>(n - k);
//   return mint(1) / C<mint, 1>(n, k);
// }

// // [x^d](1-x)^{-n}
// template <typename mint, bool large = false, bool dense = false>
// mint C_negative(ll n, ll d) {
//   assert(n >= 0);
//   if (d < 0) return mint(0);
//   if (n == 0) { return (d == 0 ? mint(1) : mint(0)); }
//   return C<mint, large, dense>(n + d - 1, d);
// }
// #line 3 "library/mod/modint.hpp"

// template <int mod>
// struct modint {
//   static constexpr u32 umod = u32(mod);
//   static_assert(umod < u32(1) << 31);
//   u32 val;

//   static modint raw(u32 v) {
//     modint x;
//     x.val = v;
//     return x;
//   }
//   constexpr modint() : val(0) {}
//   constexpr modint(u32 x) : val(x % umod) {}
//   constexpr modint(u64 x) : val(x % umod) {}
//   constexpr modint(u128 x) : val(x % umod) {}
//   constexpr modint(int x) : val((x %= mod) < 0 ? x + mod : x){};
//   constexpr modint(ll x) : val((x %= mod) < 0 ? x + mod : x){};
//   constexpr modint(i128 x) : val((x %= mod) < 0 ? x + mod : x){};
//   bool operator<(const modint &other) const { return val < other.val; }
//   modint &operator+=(const modint &p) {
//     if ((val += p.val) >= umod) val -= umod;
//     return *this;
//   }
//   modint &operator-=(const modint &p) {
//     if ((val += umod - p.val) >= umod) val -= umod;
//     return *this;
//   }
//   modint &operator*=(const modint &p) {
//     val = u64(val) * p.val % umod;
//     return *this;
//   }
//   modint &operator/=(const modint &p) {
//     *this *= p.inverse();
//     return *this;
//   }
//   modint operator-() const { return modint::raw(val ? mod - val : u32(0)); }
//   modint operator+(const modint &p) const { return modint(*this) += p; }
//   modint operator-(const modint &p) const { return modint(*this) -= p; }
//   modint operator*(const modint &p) const { return modint(*this) *= p; }
//   modint operator/(const modint &p) const { return modint(*this) /= p; }
//   bool operator==(const modint &p) const { return val == p.val; }
//   bool operator!=(const modint &p) const { return val != p.val; }
//   modint inverse() const {
//     int a = val, b = mod, u = 1, v = 0, t;
//     while (b > 0) {
//       t = a / b;
//       swap(a -= t * b, b), swap(u -= t * v, v);
//     }
//     return modint(u);
//   }
//   modint pow(ll n) const {
//     assert(n >= 0);
//     modint ret(1), mul(val);
//     while (n > 0) {
//       if (n & 1) ret *= mul;
//       mul *= mul;
//       n >>= 1;
//     }
//     return ret;
//   }
//   static constexpr int get_mod() { return mod; }
//   // (n, r), r は 1 の 2^n 乗根
//   static constexpr pair<int, int> ntt_info() {
//     if (mod == 120586241) return {20, 74066978};
//     if (mod == 167772161) return {25, 17};
//     if (mod == 469762049) return {26, 30};
//     if (mod == 754974721) return {24, 362};
//     if (mod == 880803841) return {23, 211};
//     if (mod == 943718401) return {22, 663003469};
//     if (mod == 998244353) return {23, 31};
//     if (mod == 1004535809) return {21, 582313106};
//     if (mod == 1012924417) return {21, 368093570};
//     return {-1, -1};
//   }
//   static constexpr bool can_ntt() { return ntt_info().fi != -1; }
// };

// #ifdef FASTIO
// template <int mod>
// void rd(modint<mod> &x) {
//   fastio::rd(x.val);
//   x.val %= mod;
//   // assert(0 <= x.val && x.val < mod);
// }
// template <int mod>
// void wt(modint<mod> x) {
//   fastio::wt(x.val);
// }
// #endif

// using modint107 = modint<1000000007>;
// using modint998 = modint<998244353>;
// #line 5 "main.cpp"

// void solve() {
//   STR(S);
//   ll a = S[0] - '0';
//   ll b = S[2] - '0';
//   print(a * b);
// }

// signed main() {
//   solve();
//   return 0;
// }
