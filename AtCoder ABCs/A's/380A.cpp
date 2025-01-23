#include <bits/stdc++.h>
using namespace std;

int main() {
    string N; // Use string to store the 6-digit number
    cin >> N;

    int cnt1 = 0, cnt2 = 0, cnt3 = 0;

// for (const char& c : N)
 // for (char& c : N)
    for (char c : N) { // Loop through each character of the string
        if (c == '1') cnt1++; // Count occurrences of '1'
        else if (c == '2') cnt2++; // Count occurrences of '2'
        else if (c == '3') cnt3++; // Count occurrences of '3'
    }

    if (cnt1 == 1 && cnt2 == 2 && cnt3 == 3) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}



// #include <iostream>
// using namespace std;
// int main(){
//     int a=0, b=0, c=0; char s[10];
//      cin >> s;
//     for(int i = 0; i < 6; ++i){
//         if(s[i] == '1') ++a;
//         if(s[i] == '2') ++b;
//         if(s[i] == '3') ++c;
//     }
//     if(a == 1 && b == 2 && c == 3)
//     cout << "Yes" <<endl;
//     else cout << "No" <<endl;
// }




  
  // sort(arr, arr+7);
  // cnt1 = arr[0];
  // cnt2 = arr[1];
  // cnt3 = arr[6];
  // if(cnt1 + cnt3 == cnt2*2){
  //   cout << "Yes" << endl;
  // } else {
  //   cout << "No" << endl;
  // }
  
  // cnt1 = count(arr, arr+7, 1);
  // cnt2 = count(arr, arr+7, 2);
  // cnt3 = count(arr, arr+7, 3);
  // if (cnt1 == 1 && cnt2 == 1 && cnt3 == 1){
  //   cout << "YES";
  // } else {
  //   cout << "NO";
  // }




// SSRS's code
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//   string N;
//   cin >> N;
//   sort(N.begin(), N.end());
//   if (N == "122333"){
//     cout << "Yes" << endl;
//   } else {
//     cout << "No" << endl;
//   }
// }





// kotatsugame's code
// #include<iostream>
// #include<cassert>
// using namespace std;
// int main()
// {
// 	ios::sync_with_stdio(false);
// 	cin.tie(nullptr);
// 	string N;cin>>N;
// 	int cnt[10]={};
// 	for(char c:N)cnt[c-'0']++;
// 	cout<<(cnt[1]==1&&cnt[2]==2&&cnt[3]==3?"Yes":"No")<<endl;
// }





// nonanalyzer
// #include<cstdio>
// int a, b, c; char s[10];
// int main(){
//     scanf("%s", s);
//     for(int i = 0; i < 6; ++i){
//         if(s[i] == '1') ++a;
//         if(s[i] == '2') ++b;
//         if(s[i] == '3') ++c;
//     }
//     puts((a == 1 && b == 2 && c == 3) ? "Yes" : "No");
//     return 0;
// }



// m_99 
// #include <stdio.h>
// #include <atcoder/all>
// #include <bits/stdc++.h>
// using namespace std;
// using namespace atcoder;
// using mint = modint998244353;
// #define rep(i,n) for (int i = 0; i < (n); ++i)
// #define Inf32 1000000001
// #define Inf64 1000000000000000000LL

// int main(){
	
// 	string s;
// 	cin>>s;
// 	vector<int> c(10);
// 	rep(i,s.size())c[s[i]-'0']++;
// 	if(c[1]==1&&c[2]==2&&c[3]==3)cout<<"Yes"<<endl;
// 	else cout<<"No"<<endl;
	
// 	return 0;
// }





// https://atcoder.jp/contests/abc380/submissions/59825163
// shiomusubi496's code 1010 lines of code






