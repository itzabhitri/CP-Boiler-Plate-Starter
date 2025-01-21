#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll a, b;
  cin >> a >> b;
  cout << ((a+b)*(a+b)) << endl;
  return 0;
}






// It's python code with library
// # import pypyjit
// # pypyjit.set_param('max_unroll_recursion=-1')
// from collections import defaultdict as dd
// S = input
// R = range
// P = print
// def I(): return int(S())
// def M(): return map(int, S().split())
// def L(): return list(M())
// def O(): return list(map(int, open(0).read().split()))
// def yn(b): print("Yes" if b else "No")
// biga = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
// smaa = "abcdefghijklmnopqrstuvwxyz"
// ctoi = lambda c: ord(c) - ord('a')
// ctoi2 = lambda c: ord(c) - ord('A')
// itoc = lambda i: chr(ord('a') + i)
// itoc2 = lambda i: chr(ord('A') + i)
// inf = 10 ** 18
// mod = 998244353
// dxy4 = [(-1, 0), (0, -1), (1, 0), (0, 1)]
// dxy8 = [(-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)]
// def acc(a):
// 	b = [0]
// 	for i in a:
// 		b.append(b[-1] + i)
// 	return b
// def gin(N, M):
// 	g = [[] for _ in range(N)]
// 	for _ in range(M):
// 		u, v = map(int, input().split())
// 		u -= 1
// 		v -= 1
// 		g[u].append(v)
// 		g[v].append(u)
// 	return g

// a,b=M();P((a+b)**2)