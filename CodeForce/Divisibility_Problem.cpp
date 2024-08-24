/*
Question : 
You are given two positive integers a and b. In one move you can increase a by 1 (replace a with a+1). Your task is to find the minimum 
number of moves you need to do in order to make a divisible by b. It is possible, that you have to make 0 moves, as a is already divisible 
by b. You have to answer t independent test cases.
Input : The first line of the input contains one integer t(1≤t≤104) — the number of test cases. Then t test cases follow.
        The only line of the test case contains two integers a and b (1≤a,b≤109).
Output : For each test case print the answer — the minimum number of moves you need to do in order to make a divisible by b.
Example
Input
5
10 4
13 9
100 13
123 456
92 46

Output
2
5
4
333
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
    int a,b;
    cin>>a>>b;
    if(a < b){
        int c = b - a;
        cout<<c<<endl;
    }
    else{
        if(a % b == 0){
            cout<<0<<endl;
        }
        else{
            int c = a / b;
            c = c + 1;
            b = b * c;
            b = b - a;
            cout<<b<<endl;
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

