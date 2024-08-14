/*
Question : 
*/

/*
Solution
*/

#include<bits/stdc++.h>
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

bool isLuckyNumber(int x) {
    // Check if a number is a lucky number (contains only 4 and 7)
    if (x == 0) return false; // Edge case: 0 is not considered a lucky number
    while (x > 0) {
        int digit = x % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        x /= 10;
    }
    return true;
}

void fun() {
    long long n;
    cin >> n;

    int luckyDigitCount = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            luckyDigitCount++;
        }
        n /= 10;
    }

    if (isLuckyNumber(luckyDigitCount)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}


int main(){

    //int t = 1; 
    //cin >> t;
    //while(t--){
     fun();
    //}

  return 0;
}