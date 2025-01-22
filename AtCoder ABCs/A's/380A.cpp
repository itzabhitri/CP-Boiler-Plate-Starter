#include <bits/stdc++.h>
using namespace std;

int main() {
    string N; // Use string to store the 6-digit number
    cin >> N;

    int cnt1 = 0, cnt2 = 0, cnt3 = 0;

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




// https://atcoder.jp/contests/abc380/submissions/59825163
// shiomusubi496's code
// 1005 lines of code above this:
// #line 2 "main.cpp"

// using namespace std;

// int main() {
//     string S; scan >> S;
//     sort(all(S));
//     prints(S == "122333" ? "Yes" : "No");
// }






