/*
Question :
«One dragon. Two dragon. Three dragon», — the princess was counting. She had trouble falling asleep, and she got bored of counting lambs when she was nine.

However, just counting dragons was boring as well, so she entertained herself at best she could. Tonight she imagined that all dragons were here to steal her, and she was fighting them off. Every k-th dragon got punched in the face with a frying pan. Every l-th dragon got his tail shut into the balcony door. Every m-th dragon got his paws trampled with sharp heels. Finally, she threatened every n-th dragon to call her mom, and he withdrew in panic.

How many imaginary dragons suffered moral or physical damage tonight, if the princess counted a total of d dragons?
Input

Input data contains integer numbers k, l, m, n and d, each number in a separate line (1 ≤ k, l, m, n ≤ 10, 1 ≤ d ≤ 105).
Output

Output the number of damaged dragons.
Examples
Input
Copy

1
2
3
4
12

Output
Copy

12

Input
Copy

2
3
4
5
24

Output
Copy

17

Note

In the first case every first dragon got punched with a frying pan. Some of the dragons suffered from other reasons as well, but the pan alone would be enough.

In the second case dragons 1, 7, 11, 13, 17, 19 and 23 escaped unharmed.

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
    int k,l,m,n,o;
    int count = 0;
    cin>>k>>l>>m>>o>>n;
    int arr[n];
    for(int i = 1; i <= n; i++){
        arr[i] = i;
    }
    for(int i = 1; i <= n; i++){
        if(arr[i] % k == 0 || arr[i] % l == 0|| arr[i] % m == 0||arr[i] % o == 0){
            count++;
        }
    }
    cout<<count<<endl;
}

int main(){

    int t = 1; 
    //cin >> t;
    while(t--){
     fun();
    }

  return 0;
}