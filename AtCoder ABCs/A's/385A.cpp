#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  if(a == b && b == c)
    cout << "Yes";
  else if((a+b==c) || (a+c==b) || (b+c==a))
    cout << "Yes";
  else
    cout << "No";
    return 0;
}

// 	ios::sync_with_stdio(false);
// 	cin.tie(nullptr);






// kotatsugame's submission
// #include<iostream>
// #include<algorithm>
// #include<cassert>
// using namespace std;
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(nullptr);
// 	int A[3];
// 	cin>>A[0]>>A[1]>>A[2];
// 	sort(A,A+3);
// 	cout<<(A[0]+A[1]==A[2]||A[0]==A[1]&&A[1]==A[2]?"Yes\n":"No\n");
// }







// littletree's submission
// #include<cstdio>
// using namespace std;
// int main() {
//   int a,b,c; scanf("%d %d %d",&a,&b,&c);
//   if(a+b==c||a+c==b||b+c==a||(a==b&&b==c)) printf("Yes");
//   else printf("No");
//   return 0;
// }






// qiuzx_
// //ANMHLIJKTJIY!
// #pragma GCC optimize(2)
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("inline","fast-math","unroll-loops","no-stack-protector")
// #pragma GCC diagnostic error "-fwhole-program"
// #pragma GCC diagnostic error "-fcse-skip-blocks"
// #pragma GCC diagnostic error "-funsafe-loop-optimizations"
// #include <bits/stdc++.h>
// #define INF 1000000000
// #define LINF 1000000000000000000
// #define MOD 1000000007
// #define mod 998244353
// #define F first
// #define S second
// #define ll long long
// #define N 100010
// using namespace std;
// int a,b,c;
// int main(){
// 	cin>>a>>b>>c;
// 	if(a==b&&b==c) puts("Yes");
// 	else if(a+b==c||a+c==b||b+c==a) puts("Yes");
// 	else puts("No");
// 	return 0;
// }






// Kude's submission
// a, b, c = sorted(map(int, input().split()))
// ans = a == b == c or a + b == c
// print('Yes' if ans else 'No')






// PCTprobability's submission
// #include <bits/stdc++.h>
// using namespace std;
// #if __has_include(<atcoder/all>)
// #include <atcoder/all>
// using namespace atcoder;
// #endif
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
// const ll mod = 998244353;
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
// ll poplong(ll x){ll y=0;while(x){x/=2;y++;}return y;}
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
//   vector<ll> a(3);
//   vcin(a);
//   sor(a);
//   Yes(a[0]==a[2]||a[0]+a[1]==a[2]);
// }