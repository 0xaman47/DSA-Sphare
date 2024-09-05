/*
Question : 
Allen has a LOT of money. He has n dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 1, 5, 10, 20, 100

. What is the minimum number of bills Allen could receive after withdrawing his entire balance?
Input

The first and only line of input contains a single integer n
(1≤n≤109

).
Output

Output the minimum number of bills that Allen could receive.
Examples
Input
Copy

125

Output
Copy

3

Input
Copy

43

Output
Copy

5

Input
Copy

1000000000

Output
Copy

10000000

Note

In the first sample case, Allen can withdraw this with a 100
dollar bill, a 20 dollar bill, and a 5 dollar bill. There is no way for Allen to receive 125

dollars in one or two bills.

In the second sample case, Allen can withdraw two 20
dollar bills and three 1

dollar bills.

In the third sample case, Allen can withdraw 100000000
(ten million!) 100 dollar bills.
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
    cin>>n;
    int count = 0;
    count += n / 100;
    n %= 100;
    
    // Count number of 20 denomination notes
    count += n / 20;
    n %= 20;
    
    // Count number of 10 denomination notes
    count += n / 10;
    n %= 10;
    
    // Count number of 5 denomination notes
    count += n / 5;
    n %= 5;
    
    // Count number of 1 denomination notes
    count += n / 1;  // This is redundant but included for completeness

    cout << count << endl;
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}