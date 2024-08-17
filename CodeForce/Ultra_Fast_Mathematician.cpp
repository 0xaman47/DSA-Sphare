/*
Question : 
*/

/*
Solution
*/

//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define arrInp for(int i=0;i<n;i++) cin >> arr[i];
#define arrOut(k) for(int i=0;i<n;i++) cout << arr[i] <<  k;
#define el cout << endl;

string xorBinaryStrings(const string &a, const string &b) {
    int len1 = a.size();
    int len2 = b.size();
    
    int maxLen = max(len1, len2);
    
    string paddedA = string(maxLen - len1, '0') + a;
    string paddedB = string(maxLen - len2, '0') + b;

    string result;
    for (size_t i = 0; i < maxLen; ++i) {
        result += (paddedA[i] == paddedB[i]) ? '0' : '1';
    }
    return result;
}

void fun() {
    string a, b;
    cin >> a>>b;
    string result = xorBinaryStrings(a, b);
    cout << result << endl;
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}