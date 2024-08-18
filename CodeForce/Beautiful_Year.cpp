/*
Question : 
It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.
Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only 
distinct digits.

Input : The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output : Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.

Examples :

Input
1987
Output
2013

Input
2013
Output
2014
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

bool Digit(int year) {
    bool digitSeen[10] = {false}; // Array to track seen digits

    while (year > 0) {
        int digit = year % 10; // Extract the last digit
        if (digitSeen[digit]) {
            return false; // Digit has already been seen
        }
        digitSeen[digit] = true; // Mark this digit as seen
        year /= 10; // Remove the last digit
    }
    return true; // All digits are distinct
}

void fun(){
    int y;
    cin>>y;
   
    int nextYear = y + 1;

    while (true) {
        if (Digit(nextYear)) {
            cout << nextYear <<endl;
            break;
        }
        ++nextYear; // Increment year and check the next one
    }
    
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}