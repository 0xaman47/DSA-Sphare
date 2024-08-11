/*
Question :
A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana, 2k dollars for the second one and so on (in other words, he has to pay i·k dollars for the i-th banana).

He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?
Input

The first line contains three positive integers k, n, w (1  ≤  k, w  ≤  1000, 0 ≤ n ≤ 109), the cost of the first banana, initial number of dollars the soldier has and number of bananas he wants.
Output

Output one integer — the amount of dollars that the soldier must borrow from his friend. If he doesn't have to borrow money, output 0.
Examples
Input
3 17 4

Output
13
*/

/*
Solution :

K : Price of per banana
n : Dollar
w : Banana

if we want to purchase n banana so we need kn dollar
ex : if i purchase 4 banana so we need 1*3 + 2*3 + 3*3 + 4*3 = 30 and we have 17 rupees we need extra 13 rupees so 
we borrow with friend 13 rupees.

Ans : 13

Input
3 17 4

Output
13
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define REP(i,a,b) for (int i = a; i <= b; i++)

void fun(){
    int k,w,n;
    cin>>k>>n>>w;

    ll tot_banana = k*((w*(w+1))/2);
    tot_banana = tot_banana - n;
    if(tot_banana > 0){
        cout<<tot_banana;
    }
    else{
        cout<<0;
    }
}

int main(){

    int t = 1; 
    while(t--){
     fun();
    }

  return 0;
}

