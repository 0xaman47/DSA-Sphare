/*
For a positive integer n let's define a function f: f(n) =  - 1 + 2 - 3 + .. + ( - 1)n

Your task is to calculate f(n) for a given integer n.
Input : The single line contains the positive integer n (1 ≤ n ≤ 1015).
Output : Print f(n) in a single line.
Examples
Input
4
Output
2

Input
5
Output
-3

Note
f(4) =  - 1 + 2 - 3 + 4 = 2
f(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3
*/

/*
    Solution : 
    We have n value and we need to add all even nth value and story any variable
    again add all odd nth value and store in another variable
    ex : n = 4      n = 5
    even = 2 + 4 = 6     even = 2 + 4 = 6
    odd = 1 + 3 = 4      odd = 1 + 3 + 5 = 9
    Then subtract even to odd and find answer
    ex1: 6 - 4 = 2
    ex2: 6 - 9 = -3

    using formula :
    n = 4
    ll ec = n / 2;  4 / 2 = 2
    ll even = ec * (ec + 1);    2 * (2 + 1) = 6

    ll oc = (n + 1) / 2; (4 + 1) / 2 = 2 * 2 = 4
    ll odd = oc * oc;  6 - 4 = 2 (Ans)
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ec even_count
#define oc odd_count

int main(){
    ll n;
    cin>>n;
    // ll ec,oc;
   // for(int i = 1; i <= n; i++){
   //     if(i % 2 == 0){
   //         ec++;
   //     }
   //     else{
   //         oc++;
   //     }
   // }
   //ll even = ec*(ec + 1); // 2 4 
   //ll odd = oc*oc;  // 1 3 

    ll ec = n / 2; 
    ll even = ec * (ec + 1);

    ll oc = (n + 1) / 2; 
    ll odd = oc * oc;

    cout << even - odd << endl;
  return 0;
}