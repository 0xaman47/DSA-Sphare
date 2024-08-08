/*
Question : 
You are given two integers a and b.
In one move, you can choose some integer k
from 1 to 10 and add it to a or subtract it from a. In other words, you choose an integer k∈[1;10] and perform a:=a+k or a:=a−k. 
You may use different values of k in different moves.
Your task is to find the minimum number of moves required to obtain b from a.

You have to answer t independent test cases.
Input : The first line of the input contains one integer t(1≤t≤2⋅104) — the number of test cases. Then t test cases follow.
        The only line of the test case contains two integers a and b (1≤a,b≤109).
Output : For each test case, print the answer: the minimum number of moves required to obtain b from a.
Example
Input=
6
5 5
13 42
18 4
1337 420
123456789 1000000000
100500 9000

Output

0
3
2
92
87654322
9150

Note :

In the first test case of the example, you don't need to do anything.

In the second test case of the example, the following sequence of moves can be applied: 13→23→32→42
(add 10, add 9, add 10).

In the third test case of the example, the following sequence of moves can be applied: 18→10→4
(subtract 8, subtract 6).
*/

/*
Solution :
in this question we have 2 value a and b if value of a is less than value of value b then add random value(1 to 10) in a 
and count how much iteration take to equal value of a and b.
Ex a = 13 and b = 42 value of a is less than value of b so a = 13 + [10 + 10 + 9] = 3 iteration.
if value of a is greater than value of b`then subtract subtract random value(1 to 10) in a and count iteration how much time value of a is equal to 
value of b.
ex : a = 18 and b = 4 value of a is greater than value of b so a = 18 - [10 - 4] = 2 iteration.
if value of a is equal to value of b then take iteration 0.
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

void fun(){
    ll a,b;
    cin>>a>>b;
    int a_div,b_div;
    if(a < b){
        a_div = a / 10;
        b_div = b / 10;
        int a_rem,b_rem;
        a_rem = a % 10;
        b_rem = b % 10;
        if(a_rem < b_rem){
            cout<<b_div - a_div + 1<<endl;
        }
        else{
            cout<<b_div - a_div<<endl;
        }
    }
    else if(a == b){
        cout<<0<<endl;
    }
    else{       // 18→10→4 (subtract 8, subtract 6). 18 4
        int temp;
        temp = a;
        a = b;
        b = temp;
        a_div = a / 10;
        b_div = b / 10;
        int a_rem,b_rem;
        a_rem = a % 10;
        b_rem = b % 10;
        if(a_rem < b_rem){
            cout<<b_div - a_div + 1<<endl;
        }
        else{
            cout<<b_div - a_div<<endl;
        }
    }
}

int main(){

    int t = 1; 
    cin >> t;
    while(t--){
     fun();
    }

  return 0;
}