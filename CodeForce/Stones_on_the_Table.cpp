/*
Question : 
There are n stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the 
table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones 
between them.

Input : The first line contains integer n (1 ≤ n ≤ 50) — the number of stones on the table.
        The next line contains string s, which represents the colors of the stones. We'll consider the stones in the row numbered from 1 
        1to n from left to right. Then the i-th character s equals "R", if the i-th stone is red, "G", if it's green and "B", if it's blue.
Output

Print a single integer — the answer to the problem.
Examples
Input
Copy

3
RRG

Output
Copy

1

Input
Copy

5
RRRRR

Output
Copy

4

Input
Copy

4
BRBG

Output
Copy

0


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

void fun(){
    int n;
    cin >> n; // Read the number of stones
    string s;
    cin >> s; // Read the string representing the colors of the stones
    
    int removals = 0;
    
    // Traverse the string and count necessary removals
    for (int i = 0; i < n - 1; ++i){
        if (s[i] == s[i + 1]) {
            removals++;
        }
    }
    
    cout << removals;
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}