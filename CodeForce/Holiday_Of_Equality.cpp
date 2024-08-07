/*
Question : 
In Berland it is the holiday of equality. In honor of the holiday the king decided to equalize the welfare of all 
citizens in Berland by the expense of the state treasury.
Totally in Berland there are n citizens, the welfare of each of them is estimated as the integer in ai burles 
(burle is the currency in Berland).
You are the royal treasurer, which needs to count the minimum charges of the kingdom on the king's present. 
The king can only give money, he hasn't a power to take away them.
Input : The first line contains the integer n (1 ≤ n ≤ 100) — the number of citizens in the kingdom.
        The second line contains n integers a1, a2, ..., an, where ai (0 ≤ ai ≤ 106) — the welfare of the i-th citizen.
Output : In the only line print the integer S — the minimum number of burles which are had to spend.
Examples
Input
5
0 1 2 3 4
Output
10

Input
5
1 1 0 1 1
Output
1

Input
3
1 3 1
Output
4

Input
1
12
Output
0

Note
In the first example if we add to the first citizen 4 burles, to the second 3, to the third 2 and to the fourth 1, 
then the welfare of all citizens will equal 4.

In the second example it is enough to give one burle to the third citizen.

In the third example it is necessary to give two burles to the first and the third citizens to make the welfare of
citizens equal 3.

In the fourth example it is possible to give nothing to everyone because all citizens have 12 burles.
*/

/*
Solution :
*/

#include<bits/stdc++.h>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;
typedef vector<long long> vi;
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define arrInp for(int i=0;i<n;i++) cin >> arr[i];
#define arrOut(k) for(int i=0;i<n;i++) cout << arr[i] <<  k;
#define el cout << endl;

void fun(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int maxElement = arr[0];
    for(int i = 0; i < n; i++){
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    int Count = 0;
    bool done = false;
    while (!done) {
        done = true;
        for (int i = 0; i < n; i++) {
            if (arr[i] < maxElement) {
                arr[i]++;
                done = false;
                Count++;
            }
        }
    }
    cout<<Count;
}

int main(){
     fun();
  return 0;
}